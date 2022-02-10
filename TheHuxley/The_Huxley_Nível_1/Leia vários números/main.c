#include <stdio.h>
#include <stdlib.h>


void imprimiVetor(int*v, int t){
    int i;
    for(i = 0; i<=t; i++)
    {
        printf("%i\n", v[i]);
    }

}

int main()
{
    int i;
    int v[100];

    int cont = 0;

    v[i] =v[100];

    scanf("%i", &v[i]);

    while(v[i]>=0){

        cont++;

        i = i +1;

        scanf("%i", &v[i]);
    }

    imprimiVetor(v,cont);
}
