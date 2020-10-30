#ifndef SHADER_H
#define SHADER_H
#include <string>
#include <glm/glm.hpp>

class Shader
{
  private:
    enum errorType
    {
      shader,
      program
    };
    void printErrorLog(Shader::errorType type, unsigned int target);
    unsigned int m_shaderProgram;
  public:
    void useProgram();
    Shader(const char *vertexPath, const char *fragmentPath);
    ~Shader();
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
    void setMat4(const std::string &name, const glm::mat4 &mat);
};

#endif
