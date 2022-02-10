#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, aux, aux2;

    scanf("%d", &numero);

    aux = numero/10;
    aux2 = numero%10;

    if(numero%10 == 0){
        printf("%i\n", aux);
    }
    else {
        printf("%i%i\n", aux2, aux);
    }
}
