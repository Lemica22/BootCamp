#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[256];

    int tamanho, i;

    gets(string);

    tamanho = strlen(string);

    for(i = tamanho -1; i>=0; i--){

        printf("%c", string[i]);
    }
}
