#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[256];
    char string1[256];

    gets(string);
    gets(string1);

    strcat(string, string1);

    printf("%s\n", string);

    return 0;
}
