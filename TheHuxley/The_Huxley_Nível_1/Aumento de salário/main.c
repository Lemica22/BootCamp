#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario;
    double aumento;

    scanf("%lf", &salario);

        if(salario <=280.00)
        {
        printf("Informe o salario do colaborador:\n");
        printf("Salario antes do reajuste: %.1lf\n", salario);
        printf("Percentual de aumento aplicado: 20%\n");
        printf("Valor do aumento: %.14lf\n", salario*0.2);
        printf("Salario com reajuste: %.2lf\n", salario*1.2);
        }
        if((salario > 280)&&(salario <= 700))
        {
        printf("Informe o salario do colaborador:\n");
        printf("Salario antes do reajuste: %.1lf\n", salario);
        printf("Percentual de aumento aplicado: 15%\n");
        printf("Valor do aumento: %.14lf\n", salario*0.15);
        printf("Salario com reajuste: %.2lf\n", salario*1.15);
        }
        if((salario > 700)&&(salario <=1500))
        {
        printf("Informe o salario do colaborador:\n");
        printf("Salario antes do reajuste: %.1lf\n", salario);
        printf("Percentual de aumento aplicado: 10%\n");
        printf("Valor do aumento: %.14lf\n", salario*0.1);
        printf("Salario com reajuste: %.2lf\n", salario*1.1);
        }
        if(salario > 1500)
        {
        printf("Informe o salario do colaborador:\n");
        printf("Salario antes do reajuste: %.1lf\n", salario);
        printf("Percentual de aumento aplicado: 5%\n");
        printf("Valor do aumento: %.14lf\n", salario*0.05);
        printf("Salario com reajuste: %.2lf\n", salario*1.05);
        }
}


