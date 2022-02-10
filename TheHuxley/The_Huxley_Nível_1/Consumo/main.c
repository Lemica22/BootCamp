#include <stdio.h>
#include <stdlib.h>

int main()
{
   double km, l, consumo;

   scanf("%lf", &km);
   scanf("%lf", &l);

   consumo = km/l;

   printf("%.3lf km/l", consumo);
}
