#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;

    scanf("%i", &quantidade);

    int vec[200], valor, p =0, i;

    scanf("%d", &valor);

    while(p < quantidade){

        vec[p] = valor;

        p++;

        scanf("%d", &valor);
    }

    for(i = 0; i < quantidade; i++){

        printf("%d\n", vec[quantidade -1 -i]*2);

    }
}
