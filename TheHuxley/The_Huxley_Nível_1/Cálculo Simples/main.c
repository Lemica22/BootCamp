#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod1, quant1;
    int cod2, quant2;

    float valor1, valor2;

    scanf("%i%i%f", &cod1, &quant1, &valor1);
    scanf("%i%i%f", &cod2, &quant2, &valor2);

    printf("VALOR A PAGAR: R$ %.2f\n", (quant1*valor1 + quant2*valor2));
}
