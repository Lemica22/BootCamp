#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;

    char str[256];

    gets(str);

    for(i = strlen(str); i >= 0;--i){
        if(str[i] == ' ')
            break;
    }
    for(i = 1 + i;i < strlen(str);++i){
        printf("%c", str[i]);
    }

    printf("\n");

}
