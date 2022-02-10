#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    if((a == b)&&(b==c)){

    printf("%i\n%i\n%i\n", c, b, a);
    }
    if((a > b)&&(b > c)){

        printf("%i\n%i\n%i\n", c, b, a);
       }
    if((a < b)&&(a > c)){

        printf("%i\n%i\n%i\n", c, a, b);
       }
    if((b > c)&&(c > a)){

        printf("%i\n%i\n%i\n", a, c, b);
       }
    if((b < c)&&(b > a)){

        printf("%i\n%i\n%i\n", a, b, c);
       }
    if((c > a)&&(a>b)){

        printf("%i\n%i\n%i\n", b, a, c);
       }
    if((c < a)&&(c > b)){

        printf("%i\n%i\n%i\n", b, c, a);
       }
    if((c > a)&&(b==a)){

        printf("%i\n%i\n%i\n", a, b, c);
       }
    if((c < a)&&(b==a)){

        printf("%i\n%i\n%i\n", c, b, a);
       }
    if((c < a)&&(b==c)){

        printf("%i\n%i\n%i\n", c, b, a);
       }
    if((c > a)&&(c==b)){

        printf("%i\n%i\n%i\n", b, c, a);
       }
    if((c > b)&&(c==a)){

        printf("%i\n%i\n%i\n", b, a, c);
       }
    if((c < b)&&(c==a)){

        printf("%i\n%i\n%i\n", c, a, b);
       }
}
