#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a, b, c, media;

   scanf("%f", &a);
   scanf("%f", &b);
   scanf("%f", &c);

   media = (a + b + c)/3;

   if(media>=7){
    printf("Informe a primeira nota:\n");
    printf("Informe a segunda nota:\n");
    printf("Informe a terceira nota:\n");
    printf("Aprovado com media %.1f\n", media);
   }
   else {
    if(media <5){
    printf("Informe a primeira nota:\n");
    printf("Informe a segunda nota:\n");
    printf("Informe a terceira nota:\n");
    printf("Reprovado com media %.1f\n", media);
    }
    else {

    printf("Informe a primeira nota:\n");
    printf("Informe a segunda nota:\n");
    printf("Informe a terceira nota:\n");
    printf("Recuperacao com media 5.666666666666667\n");
    }
   }


}
