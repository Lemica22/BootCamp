#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    scanf("%d", &numero);

    int a, b;

    int x, y, resto, i =0, mdc;

    scanf("%d %d", &a, &b);

    while( i < numero){

    if(b > a){

        x = b;
        y = a;

        resto =  b%a;

        while(resto !=0){

            b = a;
            a = resto;

            resto = b%a;
        }
        mdc = a;

        printf("MDC(%d,%d) = %d\n", y ,x, mdc);
    }
    else{

        x = a;
        y = b;

        resto =  a%b;

        while(resto !=0){

            a = b;
            b = resto;

            resto = a%b;
        }
        mdc = b;

        printf("MDC(%d,%d) = %d\n", x ,y, mdc);
    }

     scanf("%d %d", &a, &b);

    i++;

    }
}
