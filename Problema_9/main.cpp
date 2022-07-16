#include <iostream>

using namespace std;

int obtenerDivisor(int);
int tamano(int);

int cadena[] = {};

int main()
{
    int num = 0;
    int numerosIngresados = 0;
    cout << "Ingrese grupo de caracteres numericos: "; cin >> numerosIngresados;
    cout << "Ingrese numero separador: "; cin >> num;
    cadena[0] = numerosIngresados;
    int grupoEnteros = cadena[0];
    int divisor = obtenerDivisor(num);
    int segmento = grupoEnteros % divisor;
    int resto = grupoEnteros;
    int suma = 0;

    for(int i = 0; i < tamano(grupoEnteros); i++){
        if(tamano(segmento) < num){
            obtenerDivisor(segmento);
            segmento = resto % divisor;
            resto = resto / divisor;
            suma = suma + segmento;
        }
        segmento = resto % divisor;
        resto = resto / divisor;
        suma = suma + segmento;
    }
    cout << "Original: " << grupoEnteros << endl;
    cout << "Suma: " << suma << endl;

    return 0;
}

int obtenerDivisor(int num){ //Divisor para seperar los numeros de la cadena ingresada
    int divisor = 1;
    for(int i = 0; i < num; i++){
        divisor = divisor * 10;
    }
    return divisor;
}

int tamano(int segmento){
    int numero = segmento;
    int tam = 0;
    int resto = numero;
    int unidad = 0;

    for(int i = numero; resto > 0; i++){
        unidad = resto % 10;
        resto = resto / 10;
        tam++;
    }
    return tam;
}



