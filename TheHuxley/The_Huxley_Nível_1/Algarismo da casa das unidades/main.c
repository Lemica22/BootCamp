#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b;
   scanf("%i", &a);


   if((a >10)||(a < -10))
    {
        if(a > 10){

        b = a%10;

        printf("%i\n", b);

   }

   else {
        b =(a%10)*(-1);
            printf("%i\n", b*-1);
   }}

   else{
   printf("%i\n", a);
   }
}
