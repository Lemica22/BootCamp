#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i;

    scanf("%i", &x);
    scanf("%i", &y);

    if(x < y){
        for(i = x; i <y; i++){

            if((i%5 == 2)||(i%5 ==3)){
                printf("%i\n", i);
            }}}
    else{
        for(i = y; i <x; i++){

            if((i%5 == 2)||(i%5 ==3)){
                printf("%i\n", i);
            }}}

    }

