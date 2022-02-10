#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int num;

    scanf("%lld", &num);

    if( num ==0){

    printf("NULO\n");
    }
    else {
        if(num > 0){

        if(num%2 == 0){
            printf("POSITIVO PAR\n");
        }
        else {
            printf("POSITIVO IMPAR\n");
        }
    }
    else {
        if(num%2 == 0){
            printf("NEGATIVO PAR\n");
        }
        else
        {
            printf("NEGATIVO IMPAR\n");
        }
}}
}
