#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);

    if(n == 1){
        printf("Nordeste\n");
    }
    if(n == 2){
        printf("Norte\n");
    }
     if((n == 3)||(n == 4)){
        printf("Centro-Oeste\n");
    }
    if((n >= 5)&&(n <= 9)){
        printf("Sul\n");
    }
    if((n >= 10)&&(n <= 15)){
        printf("Sudeste\n");
    }



}
