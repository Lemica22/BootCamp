#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;

   int i;

   scanf("%d", &numero);

   for(i = numero; i >= 1; i--){

    if(numero%i == 0){

        printf("%d\n", i);
    }
   }
}
