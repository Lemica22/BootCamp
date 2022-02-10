#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b,c;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    if((a==b)&&(b==c)){
        printf("1\n");
    }else {
    if((a==b)||(a==c)||(b==c)){
        printf("3\n");
    }
    else {
        printf("2\n");
    }
    }
}

