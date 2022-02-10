#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a,b,c;
    scanf("%i", &n);

    a = n%10;
    b = (n/10)%10;
    c = (n/100)%10;

    printf("%i%i%i\n",a,b,c);
}
