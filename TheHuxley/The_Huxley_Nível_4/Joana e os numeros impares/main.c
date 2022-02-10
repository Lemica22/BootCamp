#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, numero;

    scanf("%i", &n);

    n= n*n;

    numero = n*n - (n-3)*(n-3);

    printf("%i\n", numero );
}
