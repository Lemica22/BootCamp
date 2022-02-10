#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, f, soma, soma1;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);
    scanf("%i", &e);
    scanf("%i", &f);

    soma = a + b + c + d + e + f;

    if( soma > 100){
        printf("Classificado\n");
    }
    else {
        printf("Eliminado\n");
    }
}
