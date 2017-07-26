#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if((a == b)&&(a != c)){
        cout << "C";
    }
    if((a== c)&&( c != b)){
        cout << "B";
    }
    if((b== c)&&( c != a)){
        cout << "A";
    }
    if((a==c)&&(a ==b)){
        cout << "*";
    }

    cout << "\n";
}
