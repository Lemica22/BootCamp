#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, aux = 0, i;

       scanf("%i", &n);

       for(i = 0; i < n; i++){

        if((i%3==0)||(i%5 ==0))
        {
            aux = aux +i;

       }}

 printf("%i\n", aux);

}
