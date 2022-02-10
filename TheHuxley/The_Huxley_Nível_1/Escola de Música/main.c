#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media;

    int presente;

    scanf("%f", &media);
    scanf("%i", &presente);

    if((media >= 9.5)&&(presente <= 10)){
        printf("APROVADO COM LOUVOR\n");
    }
   else{ if((media >=7)&&(presente <= 10)){
        printf("APROVADO\n");
    }
    if((media <7)&&(presente <=10)){
        printf("REPROVADO\n");
    }
    if(presente > 10){
        printf("REPROVADO POR FALTAS\n");
    }}
}
