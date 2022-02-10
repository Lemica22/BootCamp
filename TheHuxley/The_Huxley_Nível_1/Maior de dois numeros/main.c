#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

    scanf("%i", &a);
    scanf("%i", &b);

    if (a==b)
    {
        printf("%i", a);
    }
    if(a >b)
    {
        printf("%i\n", a);
    }

    if(b > a)
    {
        printf("%i\n", b);
    }


}
