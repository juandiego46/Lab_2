#include <iostream>

using namespace std;

bool verifica(char[], char);
int tam(char[]);

char sin_repe[] = {};

int main()
{
    char original[] = {};
    cout << "Ingrese palabra: "; cin >> original;
    int tam_original = tam(original);

    for(int i = 0; i < tam_original; i++){
        if(verifica(sin_repe, original[i]) == true){
            //char letra = original[i];
            sin_repe[tam(sin_repe)] = original[i];
        }
    }

    cout << "Original: ";
    for(int i = 0; i < tam_original; i++){
        cout << original[i];
    }
    cout << endl;
    cout << "Sin repetidos: ";
    for(int i = 0; i < tam(sin_repe); i++){
        cout << sin_repe[i];
    }
    cout << endl;

    return 0;
}

bool verifica(char sin_repe[], char letra){
    int tamano = tam(sin_repe);

    if(tamano == 0){
        return true;
    }
    for(int i = 0; i < tamano; i++){
        if(sin_repe[i] == letra){
            return false;
        }
    }
    return true;
}

int tam(char sin_repe[]){
    int tamano = 0;
    for(int i = 0; sin_repe[i] != '\0'; i++){
        tamano++;
    }
    return tamano;
}

