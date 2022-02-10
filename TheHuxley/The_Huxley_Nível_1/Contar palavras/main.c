#include <stdio.h>
#include <stdlib.h>

int contapalavras(char s[500])
{
    int i, cont =1, comp;
    comp = strlen(s);
    for(i =1; i <comp; i++){

        if((s[i-1] != ' ')&&(s[i]==' ')){
            cont = cont +1;
        }
    }
    return (cont);
}

    main()
    {
        int numpalavras;
        char texto[1000];

        gets(texto);

        numpalavras = contapalavras(texto);

        printf("%d\n", numpalavras);
    }
