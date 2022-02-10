#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vc, ec, sc;
    int vf, ef, sf;
    int pontosC, pontosF;

    scanf("%d %d %d %d %d %d", &vc, &ec, &sc, &vf, &ef, &sf);

    //pontos cormengo;
    pontosC = 3*vc + ec;

    //pontos Flaminthians

    pontosF = 3*vf + ef;

    if(pontosC > pontosF){
        printf("C\n");
    }
    if(pontosF > pontosC){
        printf("F\n");
    }

    if(pontosC == pontosF){
        if(sc > sf){
            printf("C\n");
        }
        else {
            if(sf > sc){
                printf("F\n");
            }
            else {
                printf("=\n");
            }
        }

    }

}
