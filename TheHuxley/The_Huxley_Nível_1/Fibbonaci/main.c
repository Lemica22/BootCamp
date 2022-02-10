#include <stdio.h>

int fib(int x){

    int i;
    int num1 =0, num2=1, num;
    for(i = 0;  i < x ; i++){

    if( i == x -1){
        printf("%d\n", num1);
    }

  else { printf("%d ", num1);
    num = num2 + num1;
    num1 = num2;
    num2 = num;
    }}
}


int main()
{
    int num;
    scanf("%d", &num);

    while(num != 0){

    fib(num);

    scanf("%d", &num);

    }

}
