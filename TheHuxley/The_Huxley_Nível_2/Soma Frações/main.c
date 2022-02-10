#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    int u, v, i =2;
    char b1, mais, b2;

    scanf("%i %c %i %c %i %c %i", &a, &b1, &b, &mais,  &c, &b2, &d);


    u = a*d + b*c;
    v = b*d;

     if((b==0)||(d == 0)){
            printf("entrada invalida!\n");

    }


    else {while( i < b*d){


        while((v%i== 0)&&(u%i ==0)){
           v = v/i;
           u = u/i;
        }
        i++;
    }



    printf("%i/%i\n", u, v);
    }
}
