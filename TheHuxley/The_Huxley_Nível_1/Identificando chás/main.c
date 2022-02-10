#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    scanf("%i", &x);

    int vec[5], i =0, cont =0;
    int valores;

    scanf("%i", &valores);

    while(i < 5){

        vec[i] = valores;

        i++;

        scanf("%i", &valores);

    }

    for(i =0; i <5; i++){
        if(vec[i] == x){
            cont++;
        }
    }

    printf("%i\n", cont);
}
