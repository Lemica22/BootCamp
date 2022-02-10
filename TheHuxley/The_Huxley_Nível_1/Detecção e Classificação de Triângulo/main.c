#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if((a + b <= c)||(a + c <= b)||(b+ c <= a)){
        printf("-\n");
    }
    else{
        if((a !=b)&&(a !=c)&&(c !=b)){
            printf("ESCALENO\n");
        }
        else {
            if ((a ==b)&&(a ==c)&&(c ==b)){
                printf("EQUILATERO\n");
            }
            else {printf("ISOSCELES\n");}
        }
    }

}
