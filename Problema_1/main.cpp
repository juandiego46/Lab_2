#include <iostream>

using namespace std;

int main()
{
    int dinero[] = {50000,20000,10000,5000,2000,1000,500,200,100,50};
    int numero = 0;
    cout<<"Ingrese numero: "; cin>>numero;
    int total_b = 0;
    int resto = numero;

    for(int i = 0; i < 10; i++) {
        total_b = resto / dinero[i];
        cout<<"$"<<dinero[i]<<": "<<total_b<<endl;
        resto = resto % dinero[i];
    }
    cout<<"Faltante: "<<resto<<endl;
    return 0;
}
