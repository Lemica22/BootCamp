#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e;

    scanf("%i%i%i%i%i", &a, &b, &c, &d, &e);

    if((a== 1)||(b==1)){
        if((c ==1)&&(d ==1)){
            if(d == 1){
                printf("AVALIADO\n");
            }
            else { printf("0\n");}
        }
        else{
            printf("0\n");
        }}

    else { printf("0\n");}
}
