#include "../include/glad/glad.h"
#include "VertexArray.h"

VertexArray::VertexArray(const float *vertices, int sizeOfVertices, const unsigned int *indices, int sizeOfIndices)
{
  glGenVertexArrays(1, &m_VAO);
  bind();

  glGenBuffers(1, &m_IBO);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_IBO);
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeOfIndices, indices, GL_STATIC_DRAW);

  glGenBuffers(1, &m_VBO);
  glBindBuffer(GL_ARRAY_BUFFER, m_VBO);
  glBufferData(GL_ARRAY_BUFFER, sizeOfVertices, vertices, GL_STATIC_DRAW);

  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3* sizeof(float)));
  glEnableVertexAttribArray(1);

  glBindVertexArray(0);
}

void VertexArray::bind()
{
  glBindVertexArray(m_VAO);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_IBO);
}

void VertexArray::unbind()
{
  glBindVertexArray(0);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}

void VertexArray::render()
{
  bind();
  glDrawArrays(GL_TRIANGLES, 0, 36);
  //glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);
  unbind();
}

VertexArray::~VertexArray()
{
  glDeleteVertexArrays(1, &m_VAO);
  glDeleteBuffers(1, &m_VBO);
}
