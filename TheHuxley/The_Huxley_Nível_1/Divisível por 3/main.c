#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int p, cont =0;

    scanf("%d", &num);


    for(p = 1; p <= num; p++)
    {

    if(num%p == 0)
    {

    if(p%3 == 0)
    {

    cont++;
    }
    }
    }
    if(cont != 0){
       printf("%d\n", cont);
    }
    else {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }

    }

