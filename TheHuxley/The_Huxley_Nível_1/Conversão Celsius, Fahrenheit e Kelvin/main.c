#include <stdio.h>
#include <stdlib.h>

int main()
{
   char temp;
   float num, K, F, C;

   scanf("%c", &temp);
   scanf("%f", &num);

   if(temp == 'C'){
     if(num >= -273.0){
    K = num + 273;
    F = 1.8*num + 32;

    printf("%.1f F\n%.1f K\n", F, K);
   }
   else {
    printf("Valor de temperatura abaixo do minimo");
   }}

   if(temp == 'K'){
      if(num >= 0.0){
    C = num - 273;
    F = 32 +1.8*(num - 273) ;
    printf("%.1f C\n%.1f F\n", C, F);
      }
    else {
    printf("Valor de temperatura abaixo do minimo");
   }}

   if(temp == 'F'){
    if (num >= -459,67){
    C = (num -32)/1.8;
    K = 0.55555*(num - 32) + 273;
    printf("%.2f C\n%.2f K\n", C, K);
   }
    else {
    printf("Valor de temperatura abaixo do minimo");
   }
   }
}

