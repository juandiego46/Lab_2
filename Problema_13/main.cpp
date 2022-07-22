#include <iostream>

using namespace std;

int numeroEstrellas(int[6][8]);

int main()
{

    int foto[6][8] = {{0,3,4,0,0,0,6,8},{5,13,6,0,0,0,2,3},{2,6,2,7,3,0,10,0},{0,0,4,15,4,1,6,0},{0,0,7,12,6,9,10,4},{5,0,6,10,6,4,8,0}};

    cout << numeroEstrellas(foto) << endl;

    return 0;
}

int numeroEstrellas(int foto[6][8]){
    int nEstrellas = 0;
    float operacion = 0;

    for(int i = 1; i < 5; i++){ //Filas
        for(int j = 1; j < 7; j++){ //Columnas
            operacion = (float(foto[i][j] + foto[i-1][j] + foto[i+1][j] + foto[i][j-1] + foto[i][j+1])) / 5;
            if(operacion > 6){
                nEstrellas++;
            }
        }
    }
    return nEstrellas;
}
