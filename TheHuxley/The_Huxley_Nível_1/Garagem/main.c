#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Glargura, Gcomprimento, Galtura;
    int Clargura, Ccomprimento, Caltura;

    int cont =0;

    scanf("%d", &Glargura);
    scanf("%d", &Gcomprimento);
    scanf("%d", &Galtura);
    scanf("%d", &Clargura);
    scanf("%d", &Ccomprimento);
    scanf("%d", &Clargura);


    if((Glargura ==1)&&(Gcomprimento ==1)&&(Galtura==1)&&(Clargura == 1)&&(Ccomprimento ==1)&&(Clargura ==1)){
        printf("SIM\n");


    }
    else{
    if(Clargura < Glargura){ cont++;}
    if(Ccomprimento < Gcomprimento){cont++;}
    if(Caltura < Galtura){cont++;}

    if(cont ==3){
        printf("SIM\n");
    }
    else{
        printf("NAO\n");
    }
    }


}

