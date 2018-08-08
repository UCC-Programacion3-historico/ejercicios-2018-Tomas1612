#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H

#include <cmath>
#include "Color.h"

class Geometria {
protected:
    float alto;
    float ancho;
public:
    void setAlto(float alto);

    void setAncho(float ancho);

    float getAlto() ;

    float getAncho() ;

    Color col;

    virtual float getPerimetro() = 0;
    virtual float getSuperficie() = 0;

};


#endif //REPASO_GEOMETRIA_H
