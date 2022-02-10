#include <stdio.h>
#include <stdlib.h>


int funcpar(int n){

    int i;
    for(i =0; i<= n; i = i +2){
        printf("%d\n", i);
    }

}
int main()
{
    int n;
    scanf("%d", &n);

    funcpar(n);
}
