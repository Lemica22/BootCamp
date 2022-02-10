#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, maior, menor =10000;

    scanf("%d", &numero);

    while(numero > 0){

        if(numero > maior){

            maior = numero;
        }

        if(numero < menor){

            menor = numero;
        }

        scanf("%d", &numero);
    }

    printf("%d %d\n", menor, maior);
}
