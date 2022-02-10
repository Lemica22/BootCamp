#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    float med;
    int aux;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    med= (a + b + c)/3;

    if(a > med){
        aux++;
    }
    if(c > med){
        aux++;
    }
    if(b > med){
        aux++;
    }

    return aux;
}
