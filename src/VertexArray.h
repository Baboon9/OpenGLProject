#ifndef VERTEX_ARRAY_H
#define VERTEX_ARRAY_H

class VertexArray
{
  private:
    unsigned int m_VBO;
    unsigned int m_VAO;
  public:
    VertexArray(const float *vertices, int sizeOfVertices);
    void bind();
};

#endif

