#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i=1, p;

    scanf("%d", &numero);

    while(i <= numero){

        for(p =0; p <i; p++){
            printf("%d", i);
        }
        printf("\n");
        i++;
    }
}
