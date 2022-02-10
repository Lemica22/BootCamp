#include <stdio.h>
#include <stdlib.h>

int main()
{
  int e, d, i;

  scanf("%d", &e);
  scanf("%d", &d);

  for( i= e; i <=d; i++){
    if(i%2 !=0 ){
        printf("%d\n", i);
    }
  }
}
