#include <stdio.h>
#include <stdlib.h>

int main()
{
    int metro;

    scanf("%i", &metro);

    if((metro <= 10)&&(metro >=0)){
        printf("7\n");
    }
    else {
        if(metro <=30){

            printf("%d\n", 7 + (metro-10));
        }
        else{
            if(metro <= 100){
                printf("%d\n", 27 + (metro-30)*2);
            }
            else{
                printf("%d\n", 167 + (metro-100)*5);
            }
        }
    }
}
