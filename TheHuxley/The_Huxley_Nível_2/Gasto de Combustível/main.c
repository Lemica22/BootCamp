#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo;
    int velocidade;

    float consumo;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    consumo = (tempo*velocidade)*(0.083333333331);

    printf("%.3f\n", consumo);
}
