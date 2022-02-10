#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y;

    scanf("%lf", &x);
    scanf("%lf", &y);

    while(x + y != 0 ){

    if(x*y > 0){

        if(x < 0){
            x = x*(-1);
            y = y*(-1);
        }

        if((y<=3*x)&&(y >=0.33333333*x)){
            printf("INTERIOR\n");

        }
        else {
            printf("EXTERIOR\n");
        }
        }
    else{
        printf("EXTERIOR\n");
    }



    scanf("%lf", &x);
    scanf("%lf", &y);
    }

}
