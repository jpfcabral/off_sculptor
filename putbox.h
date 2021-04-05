#ifndef PUTBOX_H
#define PUTBOX_H

#include "figurageometrica.h"
#include "sculptor.h"

class PutBox : public FiguraGeometrica
{
public:
    PutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    ~PutBox();
    void draw(Sculptor &t);
};

#endif // PUTBOX_H
