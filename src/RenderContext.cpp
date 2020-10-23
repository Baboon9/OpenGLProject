#include "RenderContext.h"

RenderContext::RenderContext(Shader *shader, VertexArray *vertexArray): m_shader{shader}, m_vertexArray{vertexArray}
{
}

void RenderContext::render()
{
  m_shader->useProgram();
  m_vertexArray->bind();
}
