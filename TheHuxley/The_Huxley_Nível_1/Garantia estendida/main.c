#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    int garantia;

    scanf("%f", &valor);
    scanf("%i", &garantia);

    if(garantia ==1){
        printf("%.2f\n", valor + valor*0.03);
    }
    else{
        if(garantia == 2){
            printf("%.2f\n", valor + valor*0.05);
        }
        else{
            printf("%.2lf\n", valor);
        }
    }
}
