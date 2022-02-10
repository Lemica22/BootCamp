#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;

    int duracao, sobra;

    scanf("%d", &quantidade);

    duracao = (35*quantidade)/4;

    sobra = (35*quantidade)%4;

    printf("%d\n", duracao);

    printf("%d\n", sobra);
}
