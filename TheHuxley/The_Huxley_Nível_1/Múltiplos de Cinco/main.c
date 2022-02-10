#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i;

    scanf("%i", &a);
    scanf("%i", &b);

    for(i = a; i <=b; i++){

        if(i%5 ==0){
            printf("%i", i);

        if(i + 4 > b){
            printf("\n");
        }
        else{
            printf("|");
        }


        }
    }
}
