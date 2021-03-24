#ifndef SCULPTOR_H
#define SCULPTOR_H

struct Voxel {
  float r,g,b; // Colors
  float a;
// Transparency
  bool isOn; // Included or not
};

class Sculptor {
protected:
  Voxel ***v;
  // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:
  /**
   * @brief Sculptor Construtor da classe Sculptor
   * @param _nx Quantidade de voxels alocados em x
   * @param _ny Quantidade de voxels alocados em y
   * @param _nz Quantidade de voxels alocados em z
   */
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();

  /**
   * @brief setColor escolhe uma cor para desenhar
   * @param r cor vermelha
   * @param g cor verde
   * @param b cor azul
   * @param alpha opacidade
   */
  void setColor(float r, float g, float b, float alpha);

  /**
   * @brief putVoxel Coloca um voxel na posição desejada
   * @param x posição em x
   * @param y posição em y
   * @param z posição em z
   */
  void putVoxel(int x, int y, int z);

  /**
   * @brief cutVoxel Desabilita um voxel
   * @param x posição em x
   * @param y posição em y
   * @param z posição em z
   */
  void cutVoxel(int x, int y, int z);

  /**
   * @brief putBox Coloca um cubo
   * @param x0 x inicial
   * @param x1 x final
   * @param y0 y inicial
   * @param y1 y final
   * @param z0 z inicial
   * @param z1 z final
   */
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);

  /**
   * @brief cutBox Desabilita um cubo de voxels
   * @param x0 x inicial
   * @param x1 x final
   * @param y0 y inicial
   * @param y1 y final
   * @param z0 z inicial
   * @param z1 z final
   */
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);

  /**
   * @brief putSphere Coloca uma esfera
   * @param xcenter ponto x do centro da esfera
   * @param ycenter ponto y do centro da esfera
   * @param zcenter ponto z do centro da esfera
   * @param radius raio da esfera
   */
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);

  /**
   * @brief cutSphere Desabilita os voxels de uma esfera
   * @param xcenter ponto x do centro da esfera
   * @param ycenter ponto y do centro da esfera
   * @param zcenter ponto z do centro da esfera
   * @param radius raio da esfera
   */
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);

  /**
   * @brief putEllipsoid Coloca uma elipse
   * @param xcenter Centro da elipse em x
   * @param ycenter Centro da elipse em y
   * @param zcenter Centro da elipse em z
   * @param rx Raio da elipse em x
   * @param ry Raio da elipse em y
   * @param rz Raio da elipse em z
   */
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

  /**
   * @brief cutEllipsoid Desabilita uma elipse de voxels
   * @param xcenter Centro da elipse em x
   * @param ycenter Centro da elipse em y
   * @param zcenter Centro da elipse em z
   * @param rx Raio da elipse em x
   * @param ry Raio da elipse em y
   * @param rz Raio da elipse em z
   */
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

  /**
   * @brief writeOFF Escreve em um arquivo padrão OFF
   * @param filename Nome do arquivo
   */
  void writeOFF(char* filename);
};

#endif // SCULPTOR_H
