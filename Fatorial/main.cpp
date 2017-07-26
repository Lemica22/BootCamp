#include <iostream>

using namespace std;

int main()
{
    int numero, fat =1;

    cin >> numero;

    for(int i = numero; i >=1; i--){

        fat = fat*i;
    }

    cout << fat<< "\n";
}
