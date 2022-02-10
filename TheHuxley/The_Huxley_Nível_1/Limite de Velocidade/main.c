#include <stdio.h>
#include <stdlib.h>

int main()
{
   int v;

   scanf("%i", &v);

    if (v <=50)
    {
    printf("0.00\n");
    }

   else {if((v >50)&&(v <=55))
    {
    printf("230.00\n");
   }
   else {
       if(v <=60){
    printf("340.00\n");
   }
   else {
    printf("%.2f\n", (v-50)*19.28);
   }
   }
}}
