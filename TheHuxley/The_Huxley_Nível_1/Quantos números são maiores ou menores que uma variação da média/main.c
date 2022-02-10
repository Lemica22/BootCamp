#include <stdio.h>
#include <stdlib.h>

int main()
{
   float numero;
   float vec[20000];
   int p =0, i, acima =0, abaixo =0;

   float valor;
   float media, soma =0, soma1;

   scanf("%f", &numero);
   scanf("%f", &valor);

   while( p < numero){

    soma= soma + valor;

    vec[p] = valor;

    p++;

    scanf("%f", &valor);
   }

   media = soma/numero;

   for(i = 0; i<numero; i++){

        if(vec[i] > (1.1)*media){
            acima++;
        }

        if(vec[i] < (0.9)*media){
            abaixo++;
        }
   }

   printf("%.2f\n", media);
   printf("%d\n", acima);
   printf("%d\n", abaixo);

}
