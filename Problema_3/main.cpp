#include <iostream>

using namespace std;

int longitud(char[]);
int comparador(char[], char[], int, int);

int main()
{
    char cadena1[20];
    char cadena2[20];
    cout << "Ingrese la palabra 1: "; cin >> cadena1;
    cout << "Ingrese la palabra 2: "; cin >> cadena2;
    int tam1 = longitud(cadena1);
    int tam2 = longitud(cadena2);
    if(comparador(cadena1, cadena2, tam1, tam2) == 0){
        cout << "Las palabras son diferentes." << endl;
    }
    else{
        cout << "Las palabras son iguales." << endl;
    }


    return 0;
}

int longitud(char cadena[]){
    int cont = 0;
    for(int i = 0; cadena[i] != '\0'; i++){
        cont++;
    }
    return cont;
}

int comparador(char cadena1[], char cadena2[], int longitud1, int longitud2){
    if(longitud1 != longitud2){
        return 0;
    }
    for(int i = 0; i < longitud1; i++){
        if(cadena1[i] != cadena2[i]){
            return 0;
        }
    }
    return 1;
}
