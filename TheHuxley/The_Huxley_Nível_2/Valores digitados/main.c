#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i= 0;

    int vec[5];

    scanf("%d", &numero);

    while(i < 5){

        vec[i] = numero;

        i++;

        scanf("%d", &numero);
    }
    printf("Digite um numero inteiro:\n");
    printf("Digite um numero inteiro:\n");
    printf("Digite um numero inteiro:\n");
    printf("Digite um numero inteiro:\n");
    printf("Digite um numero inteiro:\n");
    printf("Numero 1: %d\n", vec[0]);
    printf("Numero 2: %d\n", vec[1]);
    printf("Numero 3: %d\n", vec[2]);
    printf("Numero 4: %d\n", vec[3]);
    printf("Numero 5: %d\n", vec[4]);
}
