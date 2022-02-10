#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char vec[50], c[1];

    int i, tamanho, cont =0;

    gets(vec);

    scanf("%c", &c);

    tamanho = strlen(vec);

    for(i = 0; i < tamanho; i++){

        cont++;

        if(vec[i] == c[0]){

            printf("%i\n", i);

        }
    }

        printf("-1\n");
}
