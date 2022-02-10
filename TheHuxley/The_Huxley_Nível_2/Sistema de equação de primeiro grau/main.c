#include <stdio.h>
#include <stdlib.h>


int main()
{
    double  A, B, C, D, E, F;
    char x1, mais, y1, x2, add, y2, i ,i1;
    double u, v;

    scanf("%lf %c %c %lf %c %c %lf", &A, &x1, &mais, &B, &y1, &i, &C);
    scanf("%lf %c %c %lf %c %c %lf", &D, &x2, &add,  &E, &y2, &i1, &F);


    u = ((C*E - B*F)/(A*E - B*D));
    v = ((A*F - C*D)/(A*E - B*D));

    printf("%.2lf\n%.2lf\n", u, v);
}
