#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char vec[1000];

    gets(vec);

    int tamanho, cont, i;

    tamanho = strlen( vec);

    for(i = 0; i < tamanho; i++){

        if((vec[i] == '0')||(vec[i] == '1')||(vec[i] == '2')||(vec[i] == '3')||(vec[i] == '4')||(vec[i] == '5')||(vec[i] == '6')||(vec[i] == '7')||(vec[i] == '8')||(vec[i] == '9')){
            cont++;
        }

    }

    printf("%d\n", cont);
}
