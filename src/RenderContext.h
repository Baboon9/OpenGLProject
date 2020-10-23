#ifndef RENDER_CONTEXT_H
#define RENDER_CONTEXT_H

#include "Shader.h"
#include "VertexArray.h"

class RenderContext
{
  private:
    Shader *m_shader;
    VertexArray *m_vertexArray;
  public:
    RenderContext(Shader *shader, VertexArray *vertexArray);
    void render();
};

#endif
