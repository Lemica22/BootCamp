#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo;
    int horas, minutos, segundos;

    scanf("%d", &tempo);

    horas = tempo/3600;

    minutos = (tempo%3600)/60;

    segundos = ((tempo%3600)%60)%60;

    printf("%d h %d m %d s", horas, minutos, segundos);

}
