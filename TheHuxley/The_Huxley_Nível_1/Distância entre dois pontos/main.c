#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, y1;
    int x2, y2;
    double dist;

    scanf("%i%i", &x1, &y1);
    scanf("%i%i", &x2, &y2);

    dist = sqrt(pow((x1-x2),2 )+ pow((y1-y2),2));

    printf("%.4lf\n", dist);
}
