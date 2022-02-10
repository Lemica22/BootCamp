#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, mil, cen;
    //printf("Numeros xyzt tais (xy + zt)*(xy + zt) = xyzt\n");

    //for(i =1000; i < 10000; i++){

    scanf("%d", &num);

    while((num  <=9999)&&(num >=1000)){

        cen = num%100;
        mil = num/100;

        if((cen + mil)*(cen +mil)==num){
            printf("propriedade do 3025!\n");
        }
        else {
            printf("numero comum\n");
        }
        scanf("%d", &num);
    }
}
