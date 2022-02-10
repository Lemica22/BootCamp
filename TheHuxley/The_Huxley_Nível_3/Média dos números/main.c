#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   double valores, media, frac, fracEXP, soma =0;

   int i, p =0, mediaint;

   scanf("%lf", &valores);


   while(p <100){

    p++;

    soma = soma + valores;

    scanf("%lf", &valores);

   }

     for(i = 0; i < 100; i++){

    printf("Digite um numero:\n");

   }

   media = soma/100;

    mediaint = media;

    frac = media -mediaint;

    fracEXP = frac*pow(10, 15);

   printf("Media dos numeros: %i.%.0lf\n", mediaint, fracEXP);
}
