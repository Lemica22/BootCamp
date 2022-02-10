#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%i", &i);

    if(i <5){
        printf("Idade invalida.");
    }
    else {
        if((i>4)&&(i<8)){
            printf("Infantil A");
        }
        else {
            if((i > 7)&&(i <11)){
                printf("Infantil B");
            }
            else {
                if((i >10)&&(i <14)){
                    printf("Juvenil A");
                }
                else{
                    if((i>13)&&(i< 18)){
                        printf("Juvenil B");
                    }
                    else {
                        if((i >17)&&(i<41)){
                            printf("Adulto");
                        }
                        else{printf("Master");}
                    }
                }
            }
        }

    }
}
//Infantil A: [5; 7]
//Infantil B: [8; 10]
//Juvenil A: [11;13]
//: [14;17]
//Adulto: [18;40]
//Master: A partir de 41 e sem limite superior
//aso a idade informada esteja fora dos limites, emita uma mensagem de erro: "Idade invalid
