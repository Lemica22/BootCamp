#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    int p = 1, i, soma =0, maior = 0, aux;

    scanf("%d", &numero);

    while(p < 5){

            scanf("%d", &numero);
        p++;

        for(i = 1; i <=numero; i++){

            if(numero%i == 0){
                 soma = soma + i; // soma dos divisores
            }
        }

        if(soma > maior){

            maior = soma;
            aux = numero;

        }

        soma =0;


    }

    printf("%d\n", aux);
}
