#include <stdio.h>
#include <stdlib.h>

int main()
{
    int glicose, soma =0, cont= 0;

    float media;

    scanf("%d", &glicose);

    while(glicose !=0){

        soma = soma + glicose;

        cont++;

        scanf("%d", &glicose);
    }

    media = soma/cont;

    if(media < 110){
        printf("Glicose Normal\n");
    }
    else{
        if(media >= 200){
            printf("Glicose Muito Alta\n");
        }
        else{
            printf("Glicose Alterada\n");
        }
    }
}
