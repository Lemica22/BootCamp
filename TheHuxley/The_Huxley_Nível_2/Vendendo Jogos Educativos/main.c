#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade, aux;

    scanf("%i", &quantidade);

    double arrecadado, ganhoBonus, ganhoTotal;

    aux = quantidade/15;

    arrecadado =quantidade*19.9;

    ganhoBonus = arrecadado*(0.08*aux);

    ganhoTotal =  arrecadado/2 + ganhoBonus;

    printf("%.2lf\n", arrecadado);
    printf("%.2lf\n", ganhoBonus);
    printf("%.2lf\n", ganhoTotal);
}
