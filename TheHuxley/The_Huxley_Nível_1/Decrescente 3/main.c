#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int aux;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if( c > a){
        aux = c;
        c = a;
        a = aux;
    }
    if( b > a){
        aux = b;
        b = a;
        a = aux;
    }
    if( c > b){
        aux = b;
        b = c;
        c = aux;
    }
    printf("%i\n%i\n%i\n", a, b, c);
}
