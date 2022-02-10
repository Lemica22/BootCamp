#include <stdio.h>
#include <stdlib.h>

void MaiorElemento( int *vec, int t, int *m, int *p){

    int i, pos;
    *m =vec[0];
    pos = 0;

    for(i =1; i< t; i++){
        if(vec[i] > *m){
            *m =vec[i];
            pos =i;
        }
    *p = pos;
    }
}

 void Selectsort(int *vec, int t){
    int i, pos, aux[500];

    for(i =0; i <t; i++){
        MaiorElemento(vec, t, &aux[t-1-i], &pos);
        vec[pos]=-99999;
    }
    for(i =0; i<t; i++){
        vec[i] = aux[i];
        vec = aux;
    }

        printf("%d %d %d", vec[0], vec[t/2], vec[t-1]);

}


int main()
{
   // printf("digita ai o tamanho do array:\n");

    int t, i =0;

    scanf("%i", &t);

   // printf("Digite os elementos desse array para ordena-los:\n");

    int vec[t];

    int valor;

    scanf("%i", &valor);

    while(i < t){

        vec[i] = valor;

        i++;

        scanf("%i", &valor);

    }

    Selectsort(&vec, t);


    printf("\n");
}
