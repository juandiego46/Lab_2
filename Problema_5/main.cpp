#include <iostream>

using namespace std;

int longitud(int); //Longitud del entero.
int divisor(int); // Retorna el divisor para separar digito por digito el numero ingresado.

int main()
{
    int num = 123;
    cout << "Ingrese numero: "; cin >> num;
    char cadena[longitud(num)];
    int div = divisor(num) / 10;
    int resto = num;


    for(int i = 0; i < longitud(num); i++){
        cadena[i] = (resto / div) + '0';  // Conversion a en caracter 'n'.
        resto = resto % div;
        div = div / 10;

    }
    for(int i = 0; i < longitud(num); i++){
        cout << cadena[i];
    }
    cout << endl;

    return 0;
}


int longitud(int num){
    int tam = 1;
    int resto = num;
    int digito = 0;
    for(int i = 0; i < resto; i++){
        digito = resto % 10;
        resto = resto / 10;
        tam++;
    }
    return tam;
}

int divisor(int num){
    int tam = longitud(num);
    int div = 1;
    for(int i = 0; i < tam; i++){
        div = div * 10;
    }
    return div;
}
