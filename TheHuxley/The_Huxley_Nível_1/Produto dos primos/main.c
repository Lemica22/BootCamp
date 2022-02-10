#include <stdio.h>

int main()
{
    int a, b, c, d, i, cont;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);

    if((a <= 1)||(b <= 1)||( c <= 1||(d <=1))){
        printf("SEM PRODUTO\n");
    }
    else{
    for(i = 2; i < a/2; i++){
            if(a%i == 0){
                cont++;
            }
    }
    for(i = 2; i < b/2; i++){
            if(b%i == 0){
                cont++;
            }
    }
    for(i = 2; i < c/2; i++){
            if(c%i == 0){
                cont++;
            }
    }
    for(i = 2; i < d/2; i++){
            if(d%i == 0){
                cont++;
            }
    }

    if(cont == 0){
        printf("%d\n", a*b*c*d);
    }
    else {
        printf("SEM PRODUTO\n");
    }
    }

}
