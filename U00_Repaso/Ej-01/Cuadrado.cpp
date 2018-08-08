#include "Cuadrado.h"

float Cuadrado ::getPerimetro() {
    return alto*4;
}
float Cuadrado ::getSuperficie() {
    return alto*alto;
}
float Cuadrado::getDiagonal() {
    return sqrt(alto*alto+ancho*ancho) ;
}
