#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, d, x;
  double valor;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    scanf("%lf", &x);

    valor = a*x*x*x + b*x*x + c*x + d;

    printf("%.0lf\n", valor);
}
