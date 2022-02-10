#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a, b, c, d, e;
   int aux;

   scanf("%f", &a);
   scanf("%f", &b);
   scanf("%f", &c);
   scanf("%f", &d);
   scanf("%f", &e);

   if(a < 0 ){
     aux++;
   }
    if(b < 0 ){
     aux++;
   }
    if(c < 0 ){
     aux++;
   }
    if(d < 0 ){
     aux++;
   }
    if(e < 0 ){
     aux++;
   }

   printf("Digite um valor:\n");
   printf("Digite um valor:\n");
   printf("Digite um valor:\n");
   printf("Digite um valor:\n");
   printf("Digite um valor:\n");
   printf("Foram digitados %i numeros negativos\n", aux);
}
