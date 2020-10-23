#include "../include/glad/glad.h"
#include "VertexArray.h"
#include <iostream>

VertexArray::VertexArray(const float *vertices, int sizeOfVertices)
{
  glGenBuffers(1, &m_VBO);
  glBindBuffer(GL_ARRAY_BUFFER, m_VBO);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);

  glGenVertexArrays(1, &m_VAO);
}

void VertexArray::bind()
{
  glBindVertexArray(m_VAO);
}
