#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero;

    int cont=0;

    scanf("%d", &numero);

    while(numero > 0){

     if(numero%2 == 0){

        cont++;
       }
       numero = numero/10;
    }

    printf("%d\n", cont);
}
