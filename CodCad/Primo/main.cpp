#include <iostream>

using namespace std;

int main()
{
    int number, cont =0;

    cin >> number;

    for(int i =2; i < number; i++){

        if(number%i ==0){
            cont++;
        }
    }

    if(cont ==0){
        cout << "S\n";
    }
    else{
        cout << "N\n";
    }
}
