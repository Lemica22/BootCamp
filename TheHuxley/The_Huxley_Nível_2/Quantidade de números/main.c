#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    scanf("%i", &numero);

    while( numero > 0){

    printf("Digite um numero (negativo para parar o programa):\n");
    printf("Numero: %d\n",  numero);

    scanf("%i", &numero);
    }

    printf("Digite um numero (negativo para parar o programa):\n");
}
