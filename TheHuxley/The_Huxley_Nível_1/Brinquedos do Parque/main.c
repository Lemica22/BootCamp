#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F, I, cont =0;

    scanf("%i%i", &F, &I);

    if((F>=150)&&(I>=12))
    {
    cont++;
    }
    if((F>=140)&&(I>=14))
    {
    cont++;
    }
    if((F>=170)||(I>=16))
    {
    cont++;
    }

    printf("%i\n", cont);
}
