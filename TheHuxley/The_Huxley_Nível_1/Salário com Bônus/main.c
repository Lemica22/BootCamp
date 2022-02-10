#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10000];
    float salario;
    float comis;

    float total;

    gets(nome);

    scanf("%f", &salario);
    scanf("%f", &comis);

    total = salario + (0.15)*comis;

    printf("TOTAL = R$ %.2f", total);

}
