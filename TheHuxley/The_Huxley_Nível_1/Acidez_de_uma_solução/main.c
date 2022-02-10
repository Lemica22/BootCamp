#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ph;

    scanf("%f", &ph);

    if(ph < 7){

        printf("Basica")
    }

    if(ph == 7){

        printf("Neutra")
    }
    if(ph > 7){

        printf("Acida")
    }

    return 0;
}
