#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, maior = -99999;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a > maior){
        maior = a;
    }
    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }

    printf("%d eh o maior\n", maior);
}
