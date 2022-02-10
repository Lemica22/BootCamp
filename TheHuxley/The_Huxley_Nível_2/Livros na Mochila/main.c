#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesoLivro, soma =0;
    int cont;

    scanf("%f", &pesoLivro);

  while(soma <18 ){

    soma = soma + pesoLivro;

    cont++;

    scanf("%f", &pesoLivro);

  }

    printf("%d\n", cont -1);
}
