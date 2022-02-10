#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    float horas;

    float valor;

    scanf("%i", &number);
    scanf("%f", &horas);
    scanf("%f", &valor);

    printf("NUMBER = %i\n", number);
    printf("SALARY = R$ %.2f\n", horas*valor);
}
