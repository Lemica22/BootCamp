#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i;

    scanf("%d", &numero);

    for( i =1; i <= numero; i++){

        printf("%d %d %d\n", i, i*i, i*i*i);

    }
}
