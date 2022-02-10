#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior, menor, i, cont;

    scanf("%d", &menor);
    scanf("%d", &maior);

    for(i = menor; i <= maior ; i++)
    {
        if(((i%4 == 0)&&(i%100 !=0))||(i% 400 == 0))
        {
            printf("%d\n", i);
            cont++;
        }
    }
    if(cont ==0){
        printf("-1\n");
    }
}
