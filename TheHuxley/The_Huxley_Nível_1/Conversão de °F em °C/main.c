#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F, C;

    scanf("%f", &F);

    C = (F-32)*(0.5555);

    printf("Digite uma temperatura na escala Fahrenheit:\nTemperatura em Celsius: %.1f\n", C);
}
