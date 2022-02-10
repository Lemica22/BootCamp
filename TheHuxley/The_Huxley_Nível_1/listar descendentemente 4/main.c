#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if( a > d)
    {
    printf("%d %d %d %d\n", c, b, a, d);
    }
    else {

    if(b > d){
    printf("%d %d %d %d\n", c, b, d, a);
    }
    else{

    if(c > d){
    printf("%d %d %d %d\n", c, d, b, a);
    }
    else{
    printf("%d %d %d %d\n", d, c, b, a);
    }}}
}
