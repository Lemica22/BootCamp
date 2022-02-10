#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double lados;

    double raio, perimetro, seno;

    scanf("%lf", &lados);
    scanf("%lf", &raio);

    perimetro = 2*raio*lados;
    seno = sin(3.141592653/lados);

   // printf("%lf\n", seno);
    printf("%.2lf\n", perimetro*seno);
}
