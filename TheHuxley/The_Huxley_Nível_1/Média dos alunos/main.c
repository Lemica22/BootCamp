#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, media;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    media = (a + b + c)/3;

    if(media >=7){
        printf("aprovado\n");
    }
    else {
        if((media >=3)&&(media < 7)){
            printf("prova final\n");
        }
        else {
            printf("reprovado\n");
        }
    }


}
