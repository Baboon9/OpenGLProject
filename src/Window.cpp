#include "../include/glad/glad.h"
#include "Window.h"
#include <GLFW/glfw3.h>
#include <iostream>
Window::Window(int width, int height):m_widht{width}, m_height{height}
{
  std::cout <<"Window constructed\n";

  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  GLFWwindow* window = glfwCreateWindow(m_widht, m_height, "GLFW_Window", NULL, NULL);
  if (window == NULL)
  {
    std::cout << "Failed to create GLFW window" << std::endl;
    glfwTerminate();
  }
  glfwMakeContextCurrent(window);

  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
  {
    std::cout << "Failed to initialize GLAD" << std::endl;
  }

  //glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

  glViewport(0, 0, 800, 600);

  while(!glfwWindowShouldClose(window))
  {
    processInput(window);

    glfwSwapBuffers(window);
    glfwPollEvents();

    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
  }

}

Window::~Window()
{
  glfwTerminate();
}

void Window::processInput(GLFWwindow *window)
{
  if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    glfwSetWindowShouldClose(window, true);
}

void Window::framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}
