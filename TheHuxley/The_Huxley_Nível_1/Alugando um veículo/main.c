#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dias, km, valor;

    scanf("%f", &dias);
    scanf("%f", &km);

    if(km > dias*100){

    valor = dias*90 + (km -(100)*dias)*12;
    printf("%.2f\n", valor);
    }

    else {
        valor = ((dias)*90);
        printf("%.2f\n", valor);
    }
}
