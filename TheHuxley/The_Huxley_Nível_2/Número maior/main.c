#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, maior = -99999;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(a > maior){
        maior = a;
    }
    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }
    printf("Digite um numero:\n");
    printf("Digite outro numero:\n");
    printf("Digite outro numero:\n");
    printf("Maior numero: %.1f\n", maior);


}
