#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];

    gets(string);

    printf("Olah, %s!\n", string);
}
