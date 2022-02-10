#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    scanf("%d", &valor);

    int menor, maior, i;

    menor = valor;
    maior = valor;

    while(valor != -1){

        if(valor < menor){
            menor = valor;
        }
        if(valor > maior){
            maior = valor;
        }

        printf("menor=%d||MAIOR=%d\n", menor, maior);

        scanf("%i", &valor);
    }

    for(i = menor; i <= maior; i= i+menor){
            printf("%i", i);

        if(i + menor <= maior){
            printf("||");
        }

    }
    printf("\n");
}
