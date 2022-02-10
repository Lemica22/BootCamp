#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano, anoDoCometa = 1986;

    scanf("%d", &ano);

    while(ano > anoDoCometa){

        anoDoCometa = anoDoCometa + 76;
    }

    printf("%d\n", anoDoCometa);
}
