#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x1, y1;
    double x2, y2;
    double u , v;

    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

    if(x1 == x2){
        printf("(1.00x) + (0.00y) + (%.2lf) = 0\n", ((x1)*(y2 -y1))/(y1- y2));
    }
    else{
    u = (y1 - y2)/(x2 -x1);
    v = (- y1*x2 + y1*x1 + y2*x1 - y1*x1)/(x2 -x1);

    printf("(%.2lfx) + (1.00y) + (%.2lf) = 0\n", u, v);
    }
}
