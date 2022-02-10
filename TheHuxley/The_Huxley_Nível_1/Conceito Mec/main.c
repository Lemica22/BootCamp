#include <stdio.h>
#include <stdlib.h>

int main()
{
    int QLivros, Alunos;
    float prop;

    scanf("%d", &QLivros);
    scanf("%d", &Alunos);

    prop = Alunos/QLivros;

    if(prop <= 8)
    {
        printf("A\n");
    }
    else
    {
    if((prop >8)&&(prop <= 12))
    {
        printf("B\n");
    }
    else
    {
    if((prop >12)&&(prop <=18))
    {
    printf("C\n");
    }
    else
    {
        printf("D\n");
    }}}


}
