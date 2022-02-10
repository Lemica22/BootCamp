#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, i =1, segunda, terceira;

    scanf("%i", &numero);

    while(i <= numero){

    segunda = pow(i,2);
    terceira = pow(i,3);

        printf("%i %i %i\n", i, segunda, terceira );
        printf("%i %i %i\n", i, segunda+1, terceira +1);

        i++;
    }
}
