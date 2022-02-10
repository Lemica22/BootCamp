#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int aux1, aux2, aux3, aux4;

    scanf("%d", &numero);

    aux1 = (numero%10);     //undiade
    aux2 = (numero/10)%10;  //dezena
    aux3 = (numero/100)%10; //centena
    aux4 = numero/1000;     // milhar

    if((aux1 ==0)&&( aux2 == 0)&&(aux3 == 0)){

        printf("%i\n", aux4);
    }

    else {if ((aux1 == 0)&&(aux2 == 0)&&(aux3 !=0)){

        printf("%i%i\n", aux3, aux4);
    }
      else { if((aux1 == 0)&&(aux2 !=0)&&(aux3!=0)){

    printf("%i%i%i\n", aux2, aux3, aux4);
    }
    else {
        printf("%i%i%i%i\n", aux1, aux2, aux3, aux4);
    }}
}}
