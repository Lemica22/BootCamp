#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b, c, d, e, f, g, cont =0, soma;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%d", &g);

    if(a >= 100){
        cont++;
    }
    if(b >= 100){
        cont++;
    }
    if(c >= 100){
        cont++;
    }
    if(d >= 100){
        cont++;
    }
    if(e >= 100){
        cont++;
    }
    if(f >= 100){
        cont++;
    }
    if(g >= 100){
        cont++;
    }

    soma = a + b+ c + d + e +f +g;

    printf("%d\n", cont);
    printf("%d\n", soma/7);
}
