#include <iostream>

using namespace std;

int main()
{
    double a, b;
    double c, d;

    cin >> a >> b;
    cin >> c >> d;


    if(a*b > c*d){
        cout << "Primeiro";
    }
    else{
        if(c*d > a*b){
            cout << "Segundo";
        }
        else{
            cout << "Empate";
        }
    }
    cout << "\n";
}
