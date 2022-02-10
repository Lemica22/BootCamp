#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, minutos;

    scanf("%d", &horas);
    scanf("%d", &minutos);

    printf("%d minutos.\n", horas*60 + minutos);
}
