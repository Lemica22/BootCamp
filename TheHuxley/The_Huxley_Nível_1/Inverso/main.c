#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    scanf("%d", &numero);

    int i =0, cont, valor, p;

    int vec[numero];

    scanf("%d", &valor);

    while(i <= numero -1){

        vec[i] = valor;

        scanf("%d", &valor);

        i++;
    }

    for( p= numero -1; p >= 0; p--){

   printf("%i ", vec[p]);
    }

}
