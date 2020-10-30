#include <iostream>
#include "../include/glad/glad.h"
#include "Window.h"
#include "Shader.h"
#include "VertexArray.h"
#include "Texture.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

constexpr int g_width{800}, g_height{600};

const float vertices[] = {
    -0.5f, -0.5f, -0.5f,  0.0f, 0.0f,
     0.5f, -0.5f, -0.5f,  1.0f, 0.0f,
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
    -0.5f, -0.5f, -0.5f,  0.0f, 0.0f,

    -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
     0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
     0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
     0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
    -0.5f,  0.5f,  0.5f,  0.0f, 1.0f,
    -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,

    -0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
    -0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
    -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
    -0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

     0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
     0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
     0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
     0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
     0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
     0.5f, -0.5f, -0.5f,  1.0f, 1.0f,
     0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
     0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
    -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,

    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
     0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
     0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
    -0.5f,  0.5f,  0.5f,  0.0f, 0.0f,
    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f
};

const unsigned int indices[] = {  // note that we start from 0!
  0, 1, 3,   // first triangle
  1, 2, 3    // second triangle
};

Shader *myShader;
VertexArray *myVertexArray;
Texture *texture1;
Texture *texture2;

glm::mat4 g_model;
glm::mat4 g_projection;
glm::mat4 g_view;

void renderFunc()
{
  myShader->useProgram();
  texture1->bind(0);
  texture2->bind(1);
  myShader->setInt("texture1", 0);
  myShader->setInt("texture2", 1);
  myShader->setMat4("model", g_model);
  myShader->setMat4("projection", g_projection);
  myShader->setMat4("view", g_view);
  myVertexArray->render();
}

int main ()
{
  Window *myWindow = new Window{g_width, g_height};

  myShader = new Shader{"res/shader/basic.vert", "res/shader/basic.frag"};
  myVertexArray = new VertexArray{vertices, sizeof(vertices), indices, sizeof(indices)};
  texture1 = new Texture{"res/texture/container.jpg", GL_RGB};
  texture2 = new Texture{"res/texture/awesomeface.png", GL_RGBA};

  //RenderContext *myRenderContext = new RenderContext(myShader, myVertexArray, myTexture);

  g_model = glm::mat4(1.0f);
  g_projection = glm::perspective(glm::radians(45.0f), (float)g_width/(float)g_height, 0.1f, 100.0f);
  g_view = glm::mat4(1.0f);
  g_model = glm::rotate(g_model, glm::radians(-55.0f), glm::vec3(1.0f, 0.0f, 0.0f)); 
  g_view = glm::translate(g_view, glm::vec3(0.0f, 0.0f, -3.0f));

  myWindow->render(renderFunc);

  //delete myRenderContext;
  //delete myVertexArray;
  //delete myShader;
  delete myWindow;

  return 0;
}
