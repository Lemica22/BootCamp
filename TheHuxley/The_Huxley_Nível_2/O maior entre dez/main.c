#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, p=0, vec[100], maior =-99999, i=0;

    scanf("%d", &valor);

    while(p <10){

        vec[p] = valor;

        p++;

        scanf("%d", &valor);
    }
    for(i =0; i< 10; i++){

        if(vec[i] > maior){
            maior = vec[i];
        }

    }

    printf("%d\n", maior);

}
