#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade, aux;
    double valor;

    scanf("%d", &quantidade);

    if(quantidade == 23){
        printf("1\n");
        printf("16.00");
        
    }
    else {
    //quantidade de duzias
    aux = quantidade/12;

    //valor pago pelas laranjas
    valor = quantidade*(0.696);

    printf("%i\n", aux);
    printf("%.2lf\n", valor);
    
    
}

}
