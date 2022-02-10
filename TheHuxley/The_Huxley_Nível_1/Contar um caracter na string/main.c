#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char string[100];
   char x;

   int n, i, cont =0, tam;

   gets(string);

   scanf("%c", &x);

   tam = strlen(string);

   for(i =0; i <=tam; i++){

    if(string[i] == x){
        cont++;
    }}

    printf("%i\n", cont);




}
