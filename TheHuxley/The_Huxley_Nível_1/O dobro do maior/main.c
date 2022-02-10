#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    if(a >= b){
        printf("%.2lf", 2*a);
    }
    else {
        printf("%.2lf", 2*b);
    }
}
