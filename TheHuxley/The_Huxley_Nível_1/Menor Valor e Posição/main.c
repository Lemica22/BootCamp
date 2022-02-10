#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade, valor;

    scanf("%d", &quantidade);
    scanf("%d", &valor);

    int vec[1000], p =0, i, menor = 9999999, pos;

    while(p < quantidade){

        vec[p] = valor;

        p++;

        scanf("%d", &valor);
    }

    for(i = 0; i< quantidade; i++){

        if(vec[i] < menor){

            menor = vec[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d", pos);
}
