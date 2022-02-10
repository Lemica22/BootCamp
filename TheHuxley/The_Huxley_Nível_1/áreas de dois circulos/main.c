#include <stdio.h>
#include <stdlib.h>

 main()
{
  float b;
  float a;

  scanf("%f", &a);
  scanf("%f", &b);

  if( a == b){
    printf("Iguais");
  }
  if( a > b){
    printf("Primeiro círculo");
  }
  if( a < b){
    printf("Segundo círculo");
  }

}
