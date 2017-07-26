#include <iostream>

using namespace std;

int main()
{
    float quantidade;

    cin >> quantidade;

    float valores, soma =0;

    int cont =1;

    cin >> valores;

    for(int i = 0; i < quantidade; i++){

        soma = soma + valores;

        if(soma < 1000000){
           cont++;
           }
           cin >> valores;
    }

    cout << cont;
    cout << "\n";
}
