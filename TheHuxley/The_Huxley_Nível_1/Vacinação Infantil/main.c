#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    int periodicidade;

    scanf("%d", &ano);
    scanf("%d", &periodicidade);

    printf("%d %d %d\n", ano + periodicidade, ano + periodicidade*2, ano +periodicidade*3);
}
