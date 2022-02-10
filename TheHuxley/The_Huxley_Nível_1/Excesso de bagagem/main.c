#include <stdio.h>
#include <stdlib.h>

int main()
{
    double bagagem;

    scanf("%lf", &bagagem);

    if(bagagem <= 20){
        printf("0.00\n");
    }
    else{
        if((bagagem >20)&&(bagagem <=25)){
            printf("%.2lf\n", (bagagem -20)*(12.5));
        }
        else {
            if((bagagem > 25)&&(bagagem <=30)){
                printf("%.2lf", (bagagem -20)*(32.75));
            }
            else{
                printf("PESO LIMITE EXCEDIDO\n");
            }
        }
    }

}
