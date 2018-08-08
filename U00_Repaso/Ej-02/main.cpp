#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {

Calculadora<int,long> micalc;
Calculadora<float,double> micalcDouble;
cout<<micalc.sumar(2,2)<<endl;
cout<<micalcDouble.restar(8.5,4)<<endl;
try{
    cout<<micalcDouble.dividir(77,0)<<endl;
}catch (int e){
    cout<<"error: " << e << endl;
}
        cout << "Ejercicio 00/02\n" << endl;
    return 0;
}