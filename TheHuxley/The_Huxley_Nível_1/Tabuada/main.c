#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i;

    scanf("%i", &numero);

    for(i =1; i <=9; i++){

        printf("%i X %i = %i\n", numero, i, numero*i);
    }
}
