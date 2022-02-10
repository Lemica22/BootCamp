#include <stdio.h>
#include <stdlib.h>

int main()
{
    int raio;
    double volume;

    scanf("%i", &raio);

    volume = ((4)*(3.14159)*raio*raio*raio)/3;

    printf("VOLUME = %.3lf\n", volume);

}
