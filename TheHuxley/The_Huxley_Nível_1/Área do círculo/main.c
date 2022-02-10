#include <stdio.h>
#include <stdlib.h>

int main()
{
  double raio;
  double area;

  scanf("%lf", &raio);

  area = (raio)*(raio)*(3.14159)/(10000);

  printf("Area = %.4lf\n", area);
}
