#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, aux[100], i=0, cont =1;

    scanf("%d%d", &x, &y);

    while((y!= 0)||(x!=0)){

        aux[i] = x +y;

        i++;

        cont++;

        scanf("%d%d", &x, &y);
    }

    for(i =0; i < cont-1; i++){

        printf("%d\n", aux[i]);
    }
}
