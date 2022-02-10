#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, f;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);
    scanf("%i", &e);
    scanf("%i", &f);

    printf("Valor: R$%i.00", a*d + b*e + c*f);
}
