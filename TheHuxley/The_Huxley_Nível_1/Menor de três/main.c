#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int a, b, c, maior = 9999999999999;

   scanf("%lld", &a);
   scanf("%lld", &b);
   scanf("%lld", &c);

    if(a < maior){

        maior = a;
    }
    if(b < maior){

        maior = b;
    }
    if(c < maior){

        maior = c;
    }

    printf("%lld\n", maior);


}
