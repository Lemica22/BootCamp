#include <stdio.h>
#include <stdlib.h>

int main()
{
    float massa, altura;
    float IMC;

    scanf("%f", &massa);
    scanf("%f", &altura);

    IMC= (massa/pow(altura, 2));

    if(IMC <18.5){
        printf("%.2f MAGREZA\n", IMC);
    }
    else{
        if((IMC >=18.5 )&&(IMC <=24.9)){
            printf("%.2f SAUDAVEL", IMC);
        }
    else if((IMC >=25)&&(IMC <=29.9)){
    printf("%.2f SOBREPESO", IMC);
    }
    else {
        printf("%.2f OBESIDADE", IMC);
    }}


}
