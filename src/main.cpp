#include <iostream>
#include "../include/glad/glad.h"
#include "Window.h"


int main ()
{


  Window* myWindow = new Window{800, 600};
  delete myWindow;

  return 0;
}
