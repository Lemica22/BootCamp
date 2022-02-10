#include <stdio.h>
#include <stdlib.h>


int main()
{
    double premio;
    scanf("%lf", &premio);

    printf("%.2lf\n", premio*0.6);
    printf("%.2lf\n", premio*0.3);
    printf("%.2lf\n", premio*0.1);
}
