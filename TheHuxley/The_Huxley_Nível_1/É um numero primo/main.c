#include <stdio.h>
#include <stdlib.h>

int testePrimo(int x){
    int i;
    int cont =0;

    if((x == 1)||(x == 0)){
            printf("0\n");

    }
    else {for( i = 1; i <= x; i++){
        if(x%i == 0){
            cont++;
        }
    }
    if(cont <= 2){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    }

}


int main()
{
    int num;
    scanf("%d", &num);

    while(num != -1){

        testePrimo(num);
        scanf("%d", &num);
    }
  //  return 0;
}
