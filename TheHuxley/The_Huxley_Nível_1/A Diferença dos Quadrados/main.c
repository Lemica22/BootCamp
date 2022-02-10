#include <stdio.h>
#include <stdlib.h>


int main()
{

  int i, cont =0;
  int impares;

  scanf("%i", &impares);

  while(impares != 0){


    int susc,  antesc;

    susc   =(((impares -1)*(impares-1))/4);
    antesc = (((impares +1)*(impares +1))/4);


    printf("%d - %d\n", antesc, susc);

    scanf("%i", &impares);

  }
}
