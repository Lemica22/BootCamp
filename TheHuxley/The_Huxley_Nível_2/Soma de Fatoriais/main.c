#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero;

    int p =1, i, fat =1, soma =0;

    scanf("%d", &numero);

    while( p < 5){

    p++;

    if(numero%3 ==0){

    for(i =1; i<= numero;i++){

            fat = fat*i;
    }
    soma = soma + fat;
    }
    fat = 1;

    scanf("%i", &numero);
    }
    printf("%i\n", soma);
}
