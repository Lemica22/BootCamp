#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diametro;
    int altura, largura, profundidade;


    scanf("%i", &diametro);
    scanf("%i", &altura);
    scanf("%i", &largura);
    scanf("%i", &profundidade);

    if((diametro <= altura)&&(diametro <= largura)&&(diametro <= profundidade)){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
}
