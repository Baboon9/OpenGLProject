#ifndef SHADER_H
#define SHADER_H

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
    Shader(const char *vertexShaderSource, const char *fragmentShaderSource);
    ~Shader();
};

#endif
