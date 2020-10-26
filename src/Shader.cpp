#include "../include/glad/glad.h"
#include "Shader.h"
#include <iostream>

Shader::Shader(const char *vertexShaderSource, const char *fragmentShaderSource)
{
  unsigned int vertexShader;
  vertexShader = glCreateShader(GL_VERTEX_SHADER);
  glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
  glCompileShader(vertexShader);

  printErrorLog(shader, vertexShader);

  unsigned int fragmentShader;
  fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
  glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
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
