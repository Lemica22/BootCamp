#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x; // numeros em uma linha.
    int y; //tamanho da sequencia;
    int z; // passo da soma
    int i, cont = 0;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    for(i = 1; i <= y; i = i +z){

        cont++;
        printf("%i", i);

        if(cont%x ==0){

            printf("\n");
        }else printf(" ");}


}
