#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, media;

    scanf("%f%f%f%f", &a, &b, &c, &d);

    media = (a + b*2 + c*3 + d*4)/10;

    if(media >=9){
        printf("aprovado com louvor\n");
    }
    else {
        if((media >=3)&&(media < 7)){
            printf("prova final\n");
        }
        else {
                if(media >=7){
                    printf("aprovado\n");
                }
           else{ printf("reprovado\n");}
}
}
}
