#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas;

    scanf("%f", &notas);

    while(notas != 99999){

    printf("Informe uma nota entre 0 e 10:\n");

    if((notas >= 0)&&(notas <=10)){
       // printf("Valor valido\n");
        break;
    }
    else{
        printf("Valor invalido\n");
    }

    scanf("%f", &notas);
    }
}
