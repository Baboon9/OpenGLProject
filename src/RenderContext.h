#ifndef RENDER_CONTEXT_H
#define RENDER_CONTEXT_H

#include "Shader.h"
#include "VertexArray.h"
#include "Texture.h"

class RenderContext
{
  private:
    Shader *m_shader;
    VertexArray *m_vertexArray;
    Texture *m_texture;
  public:
    RenderContext(Shader *shader, VertexArray *vertexArray, Texture *texture);
    void render();
};

#endif
