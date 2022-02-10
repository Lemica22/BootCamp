#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[120];

    gets(nome);

    printf("Seja muito bem-vindo %s\n", nome);
}
