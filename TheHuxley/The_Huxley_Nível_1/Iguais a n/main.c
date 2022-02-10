#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, p =0, i;

    scanf("%d", &numero);

    int vec[101];

    while( p < 101){

    vec[p] = numero;

     p++;

    scanf("%d", &numero);

    }

    printf("\n");

    for(i = 0; i < 100; i++){

        if(vec[100] == vec[i])

        printf("%d\n", i);
     }
     
}


