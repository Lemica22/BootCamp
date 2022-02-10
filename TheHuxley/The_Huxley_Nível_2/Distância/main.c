#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vx, vy, z;
    double tempo;

    scanf("%lf", &vx);
    scanf("%lf", &vy);
    scanf("%lf", &z);

    tempo = (z/(vx-vy))*(-1)*(60);

    printf("%.0lf minutos\n", tempo);
}
