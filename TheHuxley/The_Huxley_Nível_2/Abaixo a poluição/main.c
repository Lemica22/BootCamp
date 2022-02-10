#include <stdio.h>
#include <stdlib.h>

int main()
{

   int num, cont;
   float soma = 0;

   scanf("%d", &num);

   while(num != 999){

        if(num > 2){

        soma = soma + (num -2)*(12.89);

        cont++;
        }
    scanf("%d", &num);
   }

   printf("%.2f\n", soma);
   printf("%d\n", cont);
}
