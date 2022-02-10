#include <stdio.h>


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
   
        printf("%d\n", vec[0]);
    	printf("%d\n", vec[2]);
    	printf("%d\n", vec[4]);

}


int main(int argc, char const *argv[])
{
	
	int a;

	scanf("%d", &a);

	int vec[5], i;

	while(i != 5){

		vec[i] = a;

		scanf("%d", &a);

		i++;

	}



Selectsort(&vec, 5);


}