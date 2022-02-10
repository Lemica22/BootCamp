#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    int nota50, nota20, nota10, nota5, nota1;

    scanf("%i", &valor);

    nota50 =  valor/50;
    nota20 = (valor%50)/20;
    nota10 = ((valor%50)%20)/10;
    nota5  = (valor%10)/5;
    nota1  = (valor%5);

    printf("Notas de 50: %d\n", nota50);
    printf("Notas de 20: %d\n", nota20);
    printf("Notas de 10: %d\n", nota10);
    printf("Notas de 5: %d\n", nota5);
    printf("Notas de 1: %d\n", nota1);
}
