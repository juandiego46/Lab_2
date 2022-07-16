#include <iostream>

using namespace std;



int main()
{
    int fila = 0;
    int silla = 0;
    char sala[15][20];
    char ban = 'c';


    //Inicio (Todo esta libre)
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 20; j++){
            sala[i][j] = '-';
        }
    }

    do{
        int opcion = 0;
        cout << "Si desea reservar puesto ingrese 1." << endl;
        cout << "Si desea cancelar puesto ingrese 2." << endl;
        cout << "Si desea consultar puesto ingrese 3." << endl;
        cout << "Ingrese la opcion: "; cin >> opcion;

        if(opcion == 1){
            bool ban = false;
            while(ban == false){
                cout << "Ingrese numero de fila del 1 al 15: "; cin >> fila;
                cout << "Ingrese numero de silla del 1 al 20: "; cin >> silla;
                if(sala[fila - 1][silla - 1] == '+'){
                    cout << "La silla se encuentra ocupada, ingrese otra.";
                }
                else {
                    sala[fila - 1][silla - 1] = '+';
                    ban = true;
                }
            }
            //Imprimir
            for(int i = 0; i < 15; i++){
                for(int j = 0; j < 20; j++){
                    cout << sala[i][j];
                }
            cout << endl;
            }
        }
        if(opcion == 2){
            cout << "Ingrese numero de fila del 1 al 15: "; cin >> fila;
            cout << "Ingrese numero de silla del 1 al 20: "; cin >> silla;
            sala[fila - 1][silla - 1] = '-';
            //Imprimir
            for(int i = 0; i < 15; i++){
                for(int j = 0; j < 20; j++){
                    cout << sala[i][j];
                }
            cout << endl;
            }
        }
        if(opcion == 3){
            cout << "Ingrese numero de fila del 1 al 15: "; cin >> fila;
            cout << "Ingrese numero de silla del 1 al 20: "; cin >> silla;
            if(sala[fila - 1 ][silla - 1] == '-'){
                cout << "La silla se encuentra libre, se puede reservar." << endl;
            }
            else{
                cout << "La silla ya se encuentra reservada, tienes que elegir otra." << endl;
            }
            //Imprimir
            for(int i = 0; i < 15; i++){
                for(int j = 0; j < 20; j++){
                    cout << sala[i][j];
                }
            cout << endl;
            }
        }
    cout << "Si desea salir ingrese la letra s, de lo contrario ingrese la letra c: "; cin >> ban;
    while(ban != 'c' & ban != 's'){
        cout << "Si desea salir ingrese la letra s, de lo contrario ingrese la letra c: "; cin >> ban;
    }
    } while (ban == 'c');

    cout << "Saliste del programa, QUE VUELVAS PRONTO." << endl;
    return 0;
}

