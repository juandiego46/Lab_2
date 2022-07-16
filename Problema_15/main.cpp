#include <iostream>

using namespace std;


void rectan_C(int[], int[]);
void separadorDigitos(int, int[]); //Separa las cifras de el numero entero ingresado y los agrega al arreglo que corresponde.

int recC[4];

int main()
{
    int recA[4];
    int recB[4];
    int numA = 0;
    int numB = 0;
    cout << "Ingrese un numero de 4 digitos con los datos del rectangulo 1: "; cin >> numA;
    cout << "Ingrese un numero de 4 digitos con los datos del rectangulo 2: "; cin >> numB;

    separadorDigitos(numA, recA);
    separadorDigitos(numB, recB);
    cout << "El rectangulo interseccion C es: ";
    rectan_C(recA, recB);

    for(int i = 0; i < 4; i++){
        cout << recC[i];
    }
    cout << endl;


    return 0;
}

void rectan_C(int recA[], int recB[]){
    int *ptrC = recC;
    int x = 0; // Coordenadas en el eje x.
    int y = 0; // Coordenadas en el eje y.
    int b = 0; // Base del rectangulo.
    int h = 0; // Altura del rectangulo.

    for(int i = 0; i < 4; i++){
        if(i == 0){
            x = recA[i] + recB[i];
            *ptrC = x;
        }
        else if(i == 1){
            y = recA[i] + recB[i];
            *(ptrC + i) = y;
        }
        else if(i == 2){
            h = recA[i] - recB[i];
            if(h < 0){
                h = h * (-1);
            }
            *((ptrC + i) + 1) = h;
        }
        else if(i == 3){
            b = recA[i] - recB[i];
            if(b < 0){
                b = b * (-1);
            }
            *((ptrC + i) - 1) = b;
        }
    }
}
void separadorDigitos(int num, int arreglo[]){
    int divisor = 1000;
    int digito = 0;
    int resto = num;
    int *ptr = arreglo;

    for(int i = 0; resto > 0; i++){
        digito = resto / divisor;
        resto = resto % divisor;
        divisor = divisor / 10;
        *ptr = digito;
        ptr++;
    }

}


