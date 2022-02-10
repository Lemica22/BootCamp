#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i, j;

    scanf("%d", &t);

    float matriz[t][t], aux[t], soma=0;

    for(i = 0; i < t; i++){
        for( j= 0; j < t; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i = 0; i < t; i++){
        for( j= 0; j < t; j++){

            if(i == j){
                aux[i] = matriz[i][j];

                soma = soma + matriz[i][j];
            }

        }
    }

    printf("tr(A) = ");

    for(i =0; i <t; i++){

        printf("(%.2f)", matriz[i][i]);

        if(i + 1 <t){
            printf(" + ");
        }
    }

    printf(" = %.2f\n", soma);

}
