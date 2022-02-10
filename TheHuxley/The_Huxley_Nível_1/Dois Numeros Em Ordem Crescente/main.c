#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    scanf("%i%i", &a, &b);

    if(a > b){
        printf("%i %i\n", b, a);
    }

     if(a < b){
        printf("%i %i\n", a, b);
    }
     if(a == b ){
        printf("%i %i\n", a, a);
    }
}
