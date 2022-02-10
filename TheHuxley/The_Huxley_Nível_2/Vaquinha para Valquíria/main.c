#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valores, soma =0, media;

    int cont =0;

    scanf("%lf", &valores);

    while(valores >= 0){

    soma = soma + valores;

        cont++;

    scanf("%lf", &valores);
    }

    if(cont != 0){

    media = soma/cont;

    printf("%.2lf\n", soma);
    printf("%.2lf\n", media);
    }
    else{

    printf("0.00\n0.00\n");}
}
