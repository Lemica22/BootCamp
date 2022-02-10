#include <stdio.h>
#include <stdlib.h>

int main()
{
   int quantidade;
   int valorInicial;

   scanf("%d", &quantidade);
   scanf("%d", &valorInicial);

   int valores, i = 0, menor = 999999;

   scanf("%d", &valores);

    while( i < quantidade){

        i++;

        valorInicial = valorInicial + valores;

        if(valorInicial < menor){
            menor = valorInicial;
        }

        scanf("%d", &valores);
    }

    printf("%d\n", menor);
}
