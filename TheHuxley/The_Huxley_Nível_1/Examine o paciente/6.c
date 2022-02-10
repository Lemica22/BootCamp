#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp;

   // printf("Sua temperatura ");

    scanf("%f", &temp);

    char resp;

    //printf("Se est? tendo secre??o, tosse e dor no corpo (?S? ou ?N?) ");

    scanf("%s", &resp);

    if(((resp == 'S')||(resp == 'N'))&&((temp>=35)&&(temp <=41)))
        {

       if((resp == 'S')&&(temp >=37))
          {
        printf("Exames Especiais\n");
       }
        if((resp == 'N')&&(temp >=37)){
        printf("Liberado\n ");
       }
         if((resp == 'N')&&(temp < 37)){
        printf("Liberado\n ");
       }
           if((resp == 'S')&&(temp <37)){
        printf("Exames Basicos\n ");
       }

    }
    else {
        printf("Erro\n");
    }
}
