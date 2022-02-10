#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, e, d;

    scanf("%i", &numero);

    e = numero%10;

    d= numero/10;

    if((e != 0)&&(numero%d ==0)){
        printf("SIM\n");

    }
    else {
        printf("NAO\n");
    }


}
