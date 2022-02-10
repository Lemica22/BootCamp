#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = b*b -4*a*c;

    if(a == 0){
        printf("NEESG\n");
    }
    else {
        if(delta < 0){
        printf("NRR\n");
    }
    else{
            printf("%.2f\n",(((b*(-1)) +sqrt(delta)))/(2*a));
            printf("%.2f\n", ((b*(-1)) -sqrt(delta))/(2*a));
        }
    }
}
