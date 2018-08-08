#include <iostream>

using namespace std;

int main() {
    int a,h,m,s;
    cout<< "ingresar dato" << endl;
    cin>>a;
    h= a/3600;
    m= (a-h*3600)/60;
    s= (a-h/3600+m)/60;
cout<<a<<" equivale a: "<<h<< " horas, "<<m<< " minutos, "<<s<<" segundos."<<endl;
cout << "Ejercicio 00/04\n" << endl;
    return 0;
}