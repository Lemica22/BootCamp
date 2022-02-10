#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int z;

    scanf("%d", &x);
    scanf("%d", &z);

    int  soma = 0, cont=0;

    while(x >= z){

        scanf("%d", &z);
    }


    while(soma <= z){

        soma = soma + x;

        x++;

        cont++;

       }

        printf("%d\n", cont);






}
