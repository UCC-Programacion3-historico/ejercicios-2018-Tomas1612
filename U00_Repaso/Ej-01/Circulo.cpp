#include "Circulo.h"
#define PI 3.14159

void Circulo::setRadio(float radio) {
    Circulo::radio = radio;
}

float Circulo::getRadio() {
    return radio;
}
float Circulo ::getPerimetro() {
    return 2 * PI * radio ;
}
float Circulo ::getSuperficie() {
    return PI * radio * radio ;
}