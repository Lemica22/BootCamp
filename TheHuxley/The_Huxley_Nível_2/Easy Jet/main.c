#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largura;
    float comprimento;
    float altura;

    scanf("%f", &largura);
    scanf("%f", &comprimento);
    scanf("%f", &altura);

    if(largura <= 45){
        if(comprimento <= 56){
            if(altura <=25){
                printf("PERMITIDA\n");
            }
            else{printf("PROIBIDA");}
        }
        else{printf("PROIBIDA\n");}
    }
    else{
        printf("PROIBIDA\n");
    }

}
