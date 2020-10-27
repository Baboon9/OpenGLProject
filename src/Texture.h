#ifndef TEXTURE_H
#define TEXTURE_H

class Texture
{
  private:
    unsigned int m_texture;
  public:
    Texture(const char *texturePath, int colorFormat);
    void bind(unsigned int textureUnit);
};

#endif
