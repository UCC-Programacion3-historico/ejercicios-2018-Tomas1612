#include "Triangulo.h"
float Triangulo ::getSuperficie() {
    return (ancho+alto)/2;
}
float Triangulo ::getPerimetro() {
 return (alto *3);
}

float Triangulo::getAngulo(){
    return angulo;
}

void Triangulo::setAngulo(float angulo) {
    Triangulo::angulo = angulo;
}
