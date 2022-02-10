#include <stdio.h>
#include <stdlib.h>

int main()
{
    double lado;

    scanf("%lf", &lado);

    printf("Informe a medida de um dos lados do quadrado:\nResultado: %.1lf\nDobro: %.1lf", lado*lado, lado*lado*2);
}
