#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    scanf("%d", &ano);

    if((ano%4 !=0)||((ano%100 ==0)&&(ano%400 !=0))){
         printf("NAOBISSEXTO\n");
    }
    else {

        printf("BISSEXTO\n");
    }

}
