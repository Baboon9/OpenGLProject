#include "RenderContext.h"

RenderContext::RenderContext(Shader *shader, VertexArray *vertexArray, Texture *texture): m_shader{shader}, m_vertexArray{vertexArray}, m_texture{texture}
{
}

void RenderContext::render()
{
  m_shader->useProgram();
  m_texture->bind();
  m_vertexArray->render();
}
