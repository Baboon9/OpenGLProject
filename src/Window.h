#ifndef WINDOW_H
#define WINDOW_H
#include <GLFW/glfw3.h>

class Window
{
  private:
    GLFWwindow* m_window{};
    int m_widht{};
    int m_height{};
    void processInput(GLFWwindow *window);
    void framebuffer_size_callback(GLFWwindow* window, int width, int height);
  public:
    Window(int width, int height);
    ~Window();
};

#endif

