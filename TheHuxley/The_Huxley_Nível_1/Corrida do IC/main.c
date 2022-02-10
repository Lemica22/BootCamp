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
    for( i = t -1; i >=0; i--){
        printf("%i - %d km/h\n", 5- i, vec[i]);
    }

}


int main()
{
  //  printf("digita ai o tamanho do array:\n");

   // int t,
    int i =0;

  //  scanf("%i", &t);

  //  printf("Digite os elementos desse array para ordena-los:\n");

    int vec[5];

    int valor;

    scanf("%i", &valor);

    while(i < 5){

        vec[i] = valor;

        i++;

        scanf("%i", &valor);

    }

    Selectsort(&vec, 5);


    //printf("\n");
}
