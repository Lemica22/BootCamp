#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, entrada, real, fracao;
    int parcela, inteira;

    scanf("%f", &valor);


    inteira = valor;
    fracao = valor -inteira;

    if(inteira%3 == 0){
        printf("%.2f\n", (valor/3) + fracao);
        printf("%d.00\n", inteira/3);
        printf("%d.00\n", inteira/3);
    }
    else
    {
        parcela = valor - (inteira%3);

        entrada = inteira%3 + fracao + parcela/3;

        printf("%.2f\n", entrada);
        printf("%d.00\n", parcela/3);
        printf("%d.00\n", parcela/3);
    }
}
