#include <stdio.h>
#include <string.h>

int main()
{
    char string1[50];
    char string2[50];

    scanf("%s", &string1);

    scanf("%s", &string2);

    int ret;

    ret = strncmp(string1, string2, 50);

    if(ret == 0){
        printf("IGUAIS\n");
    }
    else {
        printf("DIFERENTES\n");
    }

}
