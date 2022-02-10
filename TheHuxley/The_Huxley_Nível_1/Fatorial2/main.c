#include <stdio.h>
#include <stdlib.h>

/*void imprimeF(int*v, int t){
    int i;
    for(i = 1; i <=t; i++){
        printf("%d\n", v[i]);
    }
}


void calcfatorial(int a){

    int i;
    long long int fat=1;
    for(i = 1; i <=a; i++)
    {
        fat =i*fat;
    }
    printf("%lld\n", fat);
}

long long int calcfatorialfrecurs( int a){

    if(a <=1){
        return (1);
    }
    else {
        return a*calcfatorialfrecurs(a-1);
    }
}

*/

long long int calcFibo (int n){

    if(n <=1){
        return(n);
    }
    else {
        return (calcFibo(n -2) + calcFibo(n-1));
    }
}

void seqFib(int a){
    int i;

    for( i =0; i< a; i++){

        printf("%i ", calcFibo(i));
    }

}

int main()
{
    int i, cont;
    int v;

    scanf("%d", &v);

    while(v != -1){

       seqFib(v);
         scanf("%d", &v);
        }


}
