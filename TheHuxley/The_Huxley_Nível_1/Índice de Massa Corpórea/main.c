#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double p, a;
    double imc;

    scanf("%lf", &p);
    scanf("%lf", &a);

    imc = p/(a*a);

    if(imc < 17)
    { printf("muito abaixo do peso\n");}

   else { if((imc >=17)&&(imc <=18.49))
    { printf("abaixo do peso\n"); }

    else { if((imc >=18.50)&&(imc <=24.99)){
        printf("peso normal");
    }

     else   {if((imc >=25)&&(imc <=29.99))
    { printf("acima do peso\n");}

    else {if((imc>=30)&&(imc<=34.99))
    { printf("obesidade\n");}

   else{ if((imc>=35)&&(imc<=39.99))
    { printf("obesidade severa\n");}

    if(imc >=40) {printf("obesidade morbida\n");}

   }}}}}

   }





