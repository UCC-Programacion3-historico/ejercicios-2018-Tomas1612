#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H


#include "Geometria.h"

class Triangulo : public Geometria{
private:
    float angulo;
    float hipotenusa;



public:
    float getSuperficie();
    float getPerimetro();
    void setAngulo(float angulo);
    float getAngulo();


};


#endif //REPASO_TRIANGULO_H
