#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    scanf("%i", &ano);

    char vec[2];

    scanf("%s", &vec);


    if(vec[0]=='a'){
    if(ano > 4000){
        printf("PRE-HISTORIA\n");
    }
    else{
        printf("ANTIGUIDADE\n");
    }
    }
    else{
        if(ano < 476){
            printf("ANTIGUIDADE\n");
        }
        else{
            if(ano < 1453){
                printf("IDADE MEDIA\n");
            }
            else{
                if(ano < 1789){
                    printf("IDADE MODERNA\n");
                }
                else{
                    printf("IDADE CONTEMPORANEA\n");
                }
            }
        }
    }


}
