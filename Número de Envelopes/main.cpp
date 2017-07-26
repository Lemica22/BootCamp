#include <iostream>

using namespace std;

int main()
{
    int quantidade;
    int valor, menor =9999;

    cin >> quantidade;
    cin >> valor;

    for(int i =0; i <quantidade; i++){

        if(valor < menor){

            menor = valor;
        }
        cin >> valor;
    }

    cout << menor;
    cout << "\n";
}
