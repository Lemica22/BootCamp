#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hr, valor;

    scanf("%f", &hr);
    scanf("%f", &valor);

    printf("Informe quanto ganha por hora:\n");
    printf("Informe a quantidade mensal de trabalho:\n");
    printf("Resultado: %.1f\n", hr*valor);
}
