#include <stdio.h>
#include <stdlib.h>

int main()
{
    double cat1, cat2, hip;

    scanf("%lf", &cat1);
    scanf("%lf", &cat2);

    hip = sqrt(cat1*cat1 + cat2*cat2);

    printf("%.2lf\n", hip);
}
