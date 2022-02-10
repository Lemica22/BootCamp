#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a, b, c;

   scanf("%f", &a);
   scanf("%f", &b);
   scanf("%f", &c);

   if((a==b)&&(b ==c)){
    printf("equilatero\n");
   }
   else{
    if((a ==b)||(a == c)||(b ==c)){
        printf("isosceles\n");
    }
    else {
        printf("escaleno\n");
    }
   }

}
