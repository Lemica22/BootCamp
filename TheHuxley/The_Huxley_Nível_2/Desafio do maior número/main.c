#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, aux;

    scanf("%d", &numero);

    while(numero !=0){

        if(numero > aux){
            aux = numero;
        }

        scanf("%d", &numero);
    }

    printf("%d\n", aux);
}
