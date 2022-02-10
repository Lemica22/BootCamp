#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10];
    int u[10];
    int w[10];

    int i;

    //armazenar os dados em v;

    for(i =0; i <= 9; i++){

        scanf("%d", &v[i]);
    }
    for(i =0; i <= 9; i++){

        scanf("%d", &u[i]);
    }

    for(i =0; i <= 9; i++){

     w[i] = v[i] + u[i];
    }



    for(i= 0; i <=9; i++){

    printf("%i ", w[i]);
    }
    printf("\n");
}
