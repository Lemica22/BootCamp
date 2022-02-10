#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    scanf("%i", &idade);

    if(idade < 16){
        printf("nao eleitor\n");
    }
    else{
        if((idade >=18)&&(idade <=65)){
            printf("eleitor obrigatorio\n");
        }
        else {
            printf("eleitor facultativo\n");
        }
    }


}
