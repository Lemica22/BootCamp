#include <stdio.h>
#include <stdlib.h>

int impar(int n){

    int i;
    for(i = n; i >=0; i--){

        if(i%2 == 0){
            printf("%d\n", i);
        }
    }


}



int main()
{
   int n;
   scanf("%d", &n);

   impar(n);
}
