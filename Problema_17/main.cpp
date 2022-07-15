#include <iostream>

using namespace std;

int sumaDivisores(int);
bool buscaNumero(int[], int);

int grupo_n[] = {};

int main()
{
    int num = 1184;
    cout << "Ingrese numero: "; cin >> num;
    int contador = 1;
    int b = 1;
    int suma = 0;
    int posicion = 0;


    for(int a = 1; a <= num; a++){
        b = sumaDivisores(a);
        if(sumaDivisores(b) == a){
            if(a != b){
                if(buscaNumero(grupo_n, b) == false){
                    contador++;
                    //cout << "Numeros amigables: " << a << endl;
                    //cout << "Numeros amigables: " << b << endl;
                    suma = suma + a + b;
                    grupo_n[posicion] = a;
                    posicion++;
                    grupo_n[posicion] = b;
                    posicion++;
                }
            }
        }
    }

    cout << "La suma de los  numeros amigables: " << suma << endl;

    return 0;
}

int sumaDivisores(int num){
    int suma = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            suma = suma + i;
        }
    }
    return suma;
}

bool buscaNumero(int grupo[], int b){
    int pocision = 0;
    int tamano = sizeof(grupo);
    for(int i = 0; i < tamano; i++){
        if(grupo[i] == b){
            return true;
        }
    }
    return false;
}
