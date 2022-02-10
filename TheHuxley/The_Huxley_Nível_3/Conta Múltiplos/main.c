#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a, b, i, cont=0;

 scanf("%d", &a);
 scanf("%d", &b);

 for(i = 1; i < 50; i++){

    if(i%a ==0){

        if(i%b== 0){

            cont++;
        }
    }

 }
 printf("%d\n", cont);
}
