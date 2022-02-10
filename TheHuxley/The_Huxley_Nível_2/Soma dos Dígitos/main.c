#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resto, soma;

    scanf("%d", &numero);

    if(numero <0){

        numero = numero*(-1);
    }

    if((numero>0)&&(numero <=9)){

        printf("%d\n", numero);
    }
    else{
    while( numero > 0){

        resto = numero%10;

        soma = soma + resto;

        numero = numero/10;

    }
    printf("%d\n", soma);
    }

}
