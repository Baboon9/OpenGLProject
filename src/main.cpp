#include <iostream>
#include "../include/glad/glad.h"
#include "Window.h"
#include "Shader.h"
#include "VertexArray.h"

int main ()
{
  Window *myWindow = new Window{800, 600};

  const float vertices[] = {
     0.5f,  0.5f, 0.0f,  // top right
     0.5f, -0.5f, 0.0f,  // bottom right
    -0.5f, -0.5f, 0.0f,  // bottom left
    -0.5f,  0.5f, 0.0f   // top left
  };

  const unsigned int indices[] = {  // note that we start from 0!
    0, 1, 3,   // first triangle
    1, 2, 3    // second triangle
  };


  const char *vertexShaderSource = "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "void main()\n"
    "{\n"
    "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
    "}\0";

  const char *fragmentShaderSource = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "    FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
    "}\n\0";

  Shader *myShader = new Shader{vertexShaderSource, fragmentShaderSource};
  VertexArray *myVertexArray = new VertexArray{vertices, sizeof(vertices), indices, sizeof(indices)};
  RenderContext *myRenderContext = new RenderContext(myShader, myVertexArray);

  myWindow->render(myRenderContext);

  delete myRenderContext;
  delete myVertexArray;
  delete myShader;
  delete myWindow;

  return 0;
}
