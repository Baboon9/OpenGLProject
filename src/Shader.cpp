#include "../include/glad/glad.h"
#include "Shader.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "helpers/RootDir.h"

Shader::Shader(const char *vertexPath, const char *fragmentPath)
{
  std::string n_vertexPath{ROOT_DIR};
  n_vertexPath = n_vertexPath + vertexPath;
  vertexPath = n_vertexPath.c_str();

  std::string n_fragmentPath{ROOT_DIR};
  n_fragmentPath = n_fragmentPath + fragmentPath;
  fragmentPath = n_fragmentPath.c_str();

  std::string vertexCode;
  std::string fragmentCode;
  std::ifstream vShaderFile;
  std::ifstream fShaderFile;

  vShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
  fShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
  try
  {
    vShaderFile.open(vertexPath);
    fShaderFile.open(fragmentPath);
    std::stringstream vShaderStream, fShaderStream;
    vShaderStream << vShaderFile.rdbuf();
    fShaderStream << fShaderFile.rdbuf();
    vShaderFile.close();
    fShaderFile.close();
    vertexCode    = vShaderStream.str();
    fragmentCode  = fShaderStream.str();
  }
  catch(std::ifstream::failure e)
  {
    std::cout << "ERROR::SHADER::FILE_NOT_SUCCESFULLY_READ" << std::endl;
  }
  const char *vShaderCode = vertexCode.c_str();
  const char *fShaderCode = fragmentCode.c_str();

  unsigned int vertexShader;
  vertexShader = glCreateShader(GL_VERTEX_SHADER);
  glShaderSource(vertexShader, 1, &vShaderCode, NULL);
  glCompileShader(vertexShader);

  printErrorLog(shader, vertexShader);

  unsigned int fragmentShader;
  fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
  glShaderSource(fragmentShader, 1, &fShaderCode, NULL);
  glCompileShader(fragmentShader);

  printErrorLog(shader, fragmentShader);

  m_shaderProgram = glCreateProgram();

  glAttachShader(m_shaderProgram, vertexShader);
  glAttachShader(m_shaderProgram, fragmentShader);
  glLinkProgram(m_shaderProgram);

  printErrorLog(program, m_shaderProgram);

  glDeleteShader(vertexShader);
  glDeleteShader(fragmentShader);
}

void Shader::useProgram()
{
  glUseProgram(m_shaderProgram);
}

void Shader::printErrorLog(errorType type, unsigned int target)
{
  int  success;
  char infoLog[512];
  if(type == shader)
  {
    glGetShaderiv(target, GL_COMPILE_STATUS, &success);
  }
  else if(type == program)
  {
    glGetProgramiv(target, GL_LINK_STATUS, &success);
  }

  if(!success)
  {
    glGetShaderInfoLog(target, 512, NULL, infoLog);
    std::cout << "ERROR::SHADER::COMPILATION_FAILED\n" << infoLog << std::endl;
  }
}

Shader::~Shader()
{
  glDeleteProgram(m_shaderProgram);
}

void Shader::setBool(const std::string &name, bool value) const
{
    glUniform1i(glGetUniformLocation(m_shaderProgram, name.c_str()), (int)value);
}
void Shader::setInt(const std::string &name, int value) const
{
    glUniform1i(glGetUniformLocation(m_shaderProgram, name.c_str()), value);
}
void Shader::setFloat(const std::string &name, float value) const
{
    glUniform1f(glGetUniformLocation(m_shaderProgram, name.c_str()), value);
}
