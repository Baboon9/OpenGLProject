#ifndef VERTEX_ARRAY_H
#define VERTEX_ARRAY_H

class VertexArray
{
  private:
    unsigned int m_VBO;
    unsigned int m_VAO;
    unsigned int m_IBO;
    void bind();
    void unbind();
  public:
    VertexArray(const float *vertices, int sizeOfVertices, const unsigned int *indices, int sizeOfIndices);
    ~VertexArray();
    void render();
};

#endif

