#include <iostream>

using namespace std;

int main()
{
    int quantidade, soma;

        cin >> quantidade;

    int valor;

        cin >> valor;

    for(int i =0; i < quantidade; i++){

        soma = soma + valor;

        cin >> valor;
    }
    cout << soma;
}
