#include <iostream>
#include "../include/glad/glad.h"
#include "Window.h"
#include "Shader.h"
#include "VertexArray.h"
#include "helpers/RootDir.h"
#include "Texture.h"

const float vertices[] = {
  // positions          // colors           // texture coords
  0.5f,   0.5f,   0.0f,   1.0f, 0.0f, 0.0f,   1.0f, 1.0f,   // top right
  0.5f,   -0.5f,  0.0f,   0.0f, 1.0f, 0.0f,   1.0f, 0.0f,   // bottom right
  -0.5f,  -0.5f,  0.0f,   0.0f, 0.0f, 1.0f,   0.0f, 0.0f,   // bottom left
  -0.5f,  0.5f,   0.0f,   1.0f, 1.0f, 0.0f,   0.0f, 1.0f    // top left
};

const unsigned int indices[] = {  // note that we start from 0!
  0, 1, 3,   // first triangle
  1, 2, 3    // second triangle
};

Shader *myShader;
VertexArray *myVertexArray;
Texture *texture1;
Texture *texture2;


void renderFunc()
{
  myShader->useProgram();
  texture1->bind(0);
  texture2->bind(1);
  myShader->setInt("texture1", 0);
  myShader->setInt("texture2", 1);
  myVertexArray->render();
}

int main ()
{
  Window *myWindow = new Window{800, 600};

  myShader = new Shader{"res/shader/basic.vert", "res/shader/basic.frag"};
  myVertexArray = new VertexArray{vertices, sizeof(vertices), indices, sizeof(indices)};
  texture1 = new Texture{"res/texture/container.jpg", GL_RGB};
  texture2 = new Texture{"res/texture/awesomeface.png", GL_RGBA};

  //RenderContext *myRenderContext = new RenderContext(myShader, myVertexArray, myTexture);

  myWindow->render(renderFunc);

  //delete myRenderContext;
  //delete myVertexArray;
  //delete myShader;
  delete myWindow;

  return 0;
}
