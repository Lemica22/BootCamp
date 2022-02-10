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
    for( i = t-1; i >=0; i--){
        printf("%d\n", vec[i]);
    }

}

int main()
{
   int e, d, t=0, vec[100];

   scanf("%d", &e);
   scanf("%d", &d);

   int i, p, aux, cont =0;

        if(e > d){

      aux = d;
        d = e;
        e = aux;
   }

   for(i = e; i <= d; i++){

    for(p =2; p <i; p++){

        if(i%p == 0){
            cont++;
          //  printf("%d ", cont);
        }
    }

    if((cont == 0)&&(i !=1)){
       //printf("%i\n", i);
       vec[t] = i;
       t++;

    }

     cont = 0;
   }

   Selectsort(&vec, t);



}
