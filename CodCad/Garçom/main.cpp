#include <iostream>

using namespace std;

int main()
{
    int quantidade;

    cin >> quantidade;

    int l, c, soma =0;

    cin >> l >> c;

    for(int i =0 ; i < quantidade; i++){

        if(l > c){

            soma = soma + c;
        }
        cin >> l >> c;
    }

    cout << soma;
    cout << "\n";
}
