#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menor, maior, soma = 0, i, aux;

    scanf("%d", &menor);
    scanf("%d", &maior);

   if(menor > maior){

    aux = maior;
    maior = menor;
    menor = aux;
   }


   if((maior <=0)&&(menor<=0))
    {}
   else{

    if((maior > 0)&&(menor > 0)){

    for(i = menor; i <=maior; i++){

            soma = soma + i;
        }}
   else{
    for(i = 0; i <=maior; i++){

            soma = soma + i;
        }
   }
   }

   printf("%d\n", soma);
}
