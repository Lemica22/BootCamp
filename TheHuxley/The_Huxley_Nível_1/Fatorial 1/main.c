#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, aux =1;

    scanf("%i", &n);

    if(n >0 ){
    for(i = 1; i <= n; i++){

        aux = i*aux;
    }
    printf("Digite um numero inteiro:\n");
    printf("Fatorial: %i\n", aux);
    }
    else {
    printf("Digite um numero inteiro:\n");
    printf("Fatorial: 1\n");

    }
}
