#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float op1;

    scanf("%i", &a);

    op1 = a%10;

    if((op1==0)||(op1 == 5)){
        printf("Eh multiplo de 5");
    }
    else {
            printf("Nao eh multiplo de 5");
    }
 }
