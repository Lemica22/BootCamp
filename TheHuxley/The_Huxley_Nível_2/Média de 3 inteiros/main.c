#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    printf("%.2e\n", (a + b + c)*(0.3333333333));
}
