#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;

   int soma =0, quantpacotes, sobra;

   float  valor;

   scanf("%d", &num);

   while( num%2 ==0){

    soma = soma + num;

    scanf("%d", &num);
   }

   quantpacotes = (soma/12) + 1;

   sobra = quantpacotes*12 - soma;

   valor = quantpacotes*(7.89);

   printf("%.2f\n", valor);
   printf("%d\n", sobra);
}
