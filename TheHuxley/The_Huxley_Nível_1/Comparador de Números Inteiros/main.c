#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    scanf("%i", &x);
    scanf("%i", &y);

    if(x > y){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    if(x == y){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    if(x < y){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    if(x != y){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    if(x >= y){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    if(x <= y){
        printf("1\n");
    }
    else {
        printf("0\n");
    }


}
