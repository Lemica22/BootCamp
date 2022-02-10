#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    printf("TRIANGULO: %.3lf\n",a*c*(0.5));
    printf("CIRCULO: %.3lf\n", 3.14159*c*c);
    printf("TRAPEZIO: %.3lf\n", (a + b)*c*(0.5));
    printf("QUADRADO: %.3lf\n", b*b);
    printf("RETANGULO: %.3lf\n",a*b);

}

//a) a área do triângulo retângulo que tem A por base e C por altura.

//b) a área do círculo de raio C. (pi = 3.14159)

//c) a área do trapézio que tem A e B por bases e c por altura.

//d) a área do quadrado que tem lado B.

//e) a área do retângulo que tem lados A e B.
