#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%i", &x);
    scanf("%i", &y);

    if((x==0)&&(y==0))
    {printf("origem\n"); }

    else{
    if(x ==0)
    { printf("eixo y\n"); }

    else{
    if(y==0)
    { printf("eixo x\n");}

    else{
    if((x > 0)&&(y >0))
    { printf("primeiro\n"); }

    else{
    if((x  < 0)&&(y>0))
    { printf("segundo\n");}

    else{
    if((x<0)&&(y<0))
    { printf("terceiro\n");}

    else {printf("quarto\n");}
}
}}}
}
}



