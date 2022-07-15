#include <iostream>

using namespace std;

char convierte(int);
int longitud(int);


int main()
{
    int num = 123;
    char cadena[longitud(num)];
    char *punt = cadena;








    return 0;
}

char convierte(int num){
    char caracteres[longitud(num)];
    int resto = num;
    char *(ptr + longitud(num)) = ;
    int digito = 0;
    int longitud = 0;
    char aux;

    for(int i = 0; i < resto; i++){
        digito = resto % 10;
        aux = digito;
        ptr = &aux;
        resto = resto / 10;
        longitud++;
        ptr++;
    }
    return cadena[longitud];
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
