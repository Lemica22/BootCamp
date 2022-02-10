#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v;

    float restante;

    scanf("%i", &v);

    restante = (42 - v)*(1.75);

    printf("%.2f\n", restante);
}
