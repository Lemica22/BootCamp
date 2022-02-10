#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;

    scanf("%f", &salario);

    if(salario < 1000){
        printf("%.2f\n", salario*1.3);
    }
    else if(salario <= 1200){
        printf("%.2f\n", salario*1.1);
    }
    else {
        printf("%.2f\n", salario);
    }
}
