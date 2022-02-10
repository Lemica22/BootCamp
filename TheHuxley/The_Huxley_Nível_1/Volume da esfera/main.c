#include <stdio.h>
#include <math.h>
main()
{
    double r;
    double r2;
    double r3;

    scanf("%lf",&r);
    scanf("%lf",&r2);
    scanf("%lf",&r3);

    printf("%.2lf\n", (4*3.1416*pow(r,3))/3);
    printf("%.2lf\n", (4*3.1416*pow(r2,3))/3);
    printf("%.2lf\n", (4*3.1416*pow(r3,3))/3);
}
