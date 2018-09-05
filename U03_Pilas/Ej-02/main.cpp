#include <iostream>
#include "string.h"
#include "../Pila/Pila.h"

int comparaPilas(Pila<char> &pilaUno, Pila<char> &pilaDos) {
    int iguales = 1;
    while (!pilaUno.esVacia() && !pilaDos.esVacia()) {
        if (pilaUno.pop() != pilaDos.pop()) {
            iguales = 0;
        }
    }
    if (pilaUno.esVacia() && pilaDos.esVacia())    return iguales;
    return 0;
}

int main() {
    Pila<char> pilaUno;
    Pila<char> pilaDos;

    char uno[] = "NANI";
    char dos[] = "NANI";

    for (int i = 0; i < strlen(uno); i++) {
        pilaUno.push(uno[i]);
    }
    for (int i = 0; i < strlen(dos); i++) {
        pilaDos.push(dos[i]);
    }

    std::cout << comparaPilas(pilaUno, pilaDos);

    return 0;
}