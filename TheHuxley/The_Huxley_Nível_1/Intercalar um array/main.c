#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho, i =0, p=0;

    scanf("%d", &tamanho);

    int vect[tamanho*2];

    int valores;

    scanf("%i", &valores);

    while(i < tamanho*2){

        vect[i] = valores;

        i++;

        scanf("%i", &valores);
    }

    for(p = 0; p< tamanho; p++){
        printf("%i\n%i\n", vect[p], vect[tamanho+ p]);
    }
}
