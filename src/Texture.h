#ifndef TEXTURE_H
#define TEXTURE_H

class Texture
{
  private:
    unsigned int m_texture;
  public:
    Texture(const char *texturePath);
    void bind();
};

#endif
