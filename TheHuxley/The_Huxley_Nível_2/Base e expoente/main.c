#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, e;

    scanf("%lf", &a);
    scanf("%lf", &b);

    e = pow(a, b);

    printf("Informe a base:\n");
    printf("Informe o expoente:\n");
    printf("Resultado: %.0lf\n", e);
}
