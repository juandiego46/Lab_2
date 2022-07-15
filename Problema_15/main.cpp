#include <iostream>

using namespace std;

//int rec_A[] = {};
//int rec_B[] = {};

void rectan_C(int[], int[]);


int main()
{
    int rec_A[] = {0,0,8,4};
    int rec_B[] = {5,2,6,7};
    int rec_C[4];
    int tamano = sizeof(rec_A) / 4;
    int x = 0; // Coordenadas en el eje x.
    int y = 0; // Coordenadas en el eje y.
    int b = 0; // Base del rectangulo.
    int h = 0; // Altura del rectangulo.

    for(int i = 0; i < tamano; i++){
        if(i == 0){
            x = rec_A[i] + rec_B[i];
            rec_C[i] = x;
        }
        else if(i == 1){
            y = rec_A[i] + rec_B[i];
            rec_C[i] = y;
        }
        else if(i == 2){
            b = rec_A[i] - rec_B[i];
            rec_C[i + 1] = b;
        }
        else if(i == 3){
            h = rec_A[i] - rec_B[i];
            rec_C[i - 1] = h;
        }

    }
    for(int i = 0; i < tamano; i++){
        cout << rec_C[i] << endl;
    }
    cout << endl;

    return 0;
}

void rectan_C(int rec_A[], int rec_B[]){
    int rec_C[4];
    int tamano = sizeof(rec_A) / 4;
    int *ptr = rec_C;
    int x = 0; // Coordenadas en el eje x.
    int y = 0; // Coordenadas en el eje y.
    int b = 0; // Base del rectangulo.
    int h = 0; // Altura del rectangulo.

    for(int i = 0; i < tamano; i++){
        if(i == 0){
            x = rec_A[i] + rec_B[i];
            rec_C = &ptr;
        }
        else if(i == 1){
            y = rec_A[i] + rec_B[i];
            rec_C[i] = y;
        }
        else if(i == 2){
            b = rec_A[i] - rec_B[i];
            rec_C[i + 1] = b;
        }
        else if(i == 3){
            h = rec_A[i] - rec_B[i];
            rec_C[i - 1] = h;
        }

    }
}


