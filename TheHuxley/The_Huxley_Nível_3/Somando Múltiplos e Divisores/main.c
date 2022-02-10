#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior, menor;
    int i, aux, soma =0;

    scanf("%d", &menor);
    scanf("%d", &maior);

    if(maior > menor){

    for( i = menor +1; i < maior; i++){

        if(1000%i ==0){

            if(i%4 == 0){
                soma = soma +i;
            }
        }
    }
    printf("%d\n", soma);}

    else{
            for( i = maior +1; i < menor; i++){

        if(1000%i ==0){

            if(i%4 == 0){
                soma = soma +i;
            }
        }
    }
    printf("%d\n", soma);}

    }

