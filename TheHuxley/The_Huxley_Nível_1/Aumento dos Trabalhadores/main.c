#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;

    scanf("%f", &salario);

    if (salario >= 500){
        printf("%.2f\n", salario*1.1);
    }
    else if(salario> 300){
        printf("%.2f\n", salario*1.07);

    }
    else printf("%.2f", salario*1.05);
}
