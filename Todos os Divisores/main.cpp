#include <iostream>

using namespace std;

int main()
{
   int numero, i =1;

   cin >> numero;

   while(i <= numero){

    if(numero%i == 0){

        cout <<i;
        cout <<" ";
    }
    i++;
   }

   cout <<"\n";
}
