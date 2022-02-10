#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, i =2, cont;
  scanf("%i", &num);

  for( i = 2; i < num; i++){

    if(num%i == 0){
        cont++;
    }
  }
  if(cont == 0){
    printf("SIM\n");
  }
  else {
    printf("NAO\n");
  }

}
