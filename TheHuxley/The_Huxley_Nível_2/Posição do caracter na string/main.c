#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char vec[500];

    char c[1];

    int tamanho, i =0, cont=0;

    gets(vec);

    scanf("%c", &c);

    tamanho = strlen(vec);


    for(i =0; i <tamanho; i++){

    if(vec[i]== c[0]){

    cont++;

    printf("%i\n", i);

    break;

    }
}
    if(cont ==0){
    printf("-1\n");
}

}
