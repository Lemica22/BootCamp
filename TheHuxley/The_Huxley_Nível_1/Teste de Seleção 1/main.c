#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    int cont=0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if(b > c){
        cont++;
    }
    if(d > a){
        cont++;
    }
    if((a+ b) < (c+d)){
        cont++;
    }
     if((c > 0)&&(d > 0)){
        cont++;
    }
    if( a%2 ==0){
        cont++;
    }

    if(cont ==5){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
}
