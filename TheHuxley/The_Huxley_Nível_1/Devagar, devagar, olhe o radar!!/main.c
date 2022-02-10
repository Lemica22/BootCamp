#include <stdio.h>
#include <stdlib.h>

int main()
{
    float veloPista;
    float veloCarro;

    scanf("%f", &veloPista);
    scanf("%f", &veloCarro);

    if(veloCarro < veloPista){
        printf("0.00\n0");
    }

     else {
        if((veloCarro < 1.2*veloPista)&&(veloCarro > veloPista)){
        printf("85.13\n4\n");
    }
    else{
        if(veloCarro <= 1.5*veloPista){
            printf("127.69\n5\n");
        }
        else{
            printf("574.62\n7\n");
        }
    }
     }

}
