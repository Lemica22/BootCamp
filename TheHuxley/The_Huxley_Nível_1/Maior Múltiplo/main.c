#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, L, i =0, cont = 0 ;

    scanf("%i", &n);
    scanf("%i", &L);

    if(n==1){
        printf("%i\n", L);
    }

    else {if(L> n){
    for(i = L; i<= L; --i ){

        if(i%n == 0){
            cont++;
            printf("%i\n", i);
            break;
        }

    }}

    else {if(cont ==0){
        printf("sem multiplos menores que %i\n", L);
    }
    else {
        printf("sem multiplos menores que %i\n", L);
    }
}}}
