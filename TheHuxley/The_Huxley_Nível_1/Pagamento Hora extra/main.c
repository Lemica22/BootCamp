#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, horas;

    double porcento;

    scanf("%f", &salario);
    scanf("%f", &horas);

    porcento = salario*0.05;

    printf("%.2lf\n", porcento*horas + salario);


}
