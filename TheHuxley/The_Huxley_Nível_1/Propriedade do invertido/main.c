#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i;

    scanf("%i", &x);
    scanf("%i", &y);

    for(i = x; i <= y; i++){

        if((i%10 !=0)&&(i%(i/10)== 0)){

            printf("%i\n", i);
        }
    }
}
