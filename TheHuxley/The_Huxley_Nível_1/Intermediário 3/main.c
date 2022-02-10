#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    int maior = -99999, menor = 99999;

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
    if(a < menor){
        menor = a;
    }
    if(b < menor){
        menor = b;
    }
    if(c < menor){
        menor = c;
    }

    if((a != maior)&&(a != menor)){
        printf("%d\n", a);
    }
    if((b != maior)&&(b != menor)){
        printf("%d\n", b);
    }
    if((c != maior)&&(c != menor)){
        printf("%d\n", c);
    }


}
