#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    int vec[10], p =0, i, cont;

    scanf("%d", &numero);

    while(p <=9){

        vec[p] = numero;

        p++;

        scanf("%d", &numero);

        //printf("%i\n", p);
    }

    for( i =0; i <10; i++){

            if(vec[9] == vec[i]){
                cont++;
            }
    }

    printf("O numero %d apareceu %d vezes\n", vec[9], cont);

}
