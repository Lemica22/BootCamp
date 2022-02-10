#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo;

    scanf("%d", &tempo);

    int anos, meses, dias;

    anos = tempo/365;

    meses = (tempo - anos*365)/30;

    dias = tempo - anos*365 - meses*30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
}
