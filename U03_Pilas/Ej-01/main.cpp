#include <iostream>
#include "string.h"
#include "../Pila/Pila.h"


int main() {

    char palabra[] = "talF si htraE ehT";
    Pila<char> miPila;

    for (int i = 0; i < strlen(palabra); i++)
        miPila.push(palabra[i]);

    while (!miPila.esVacia()) {
        std::cout << miPila.pop();
    }
    return -5;
}