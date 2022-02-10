#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if((a <= b +c)&&(b <= a +c)&&(c <= a +b)){

        if((a !=b)&&(a !=c)&&(b!=c)){
            printf("Informe o comprimento do primeiro lado do triangulo:\n");
            printf("Informe o comprimento do segundo lado do triangulo:\n");
            printf("Informe o comprimento do terceiro lado do triangulo:\n");
            printf("Os lados informados podem formar um triangulo\n");
            printf("Triangulo Escaleno\n");
        }
        else{
            if((a ==b)&&(b ==c)){
            printf("Informe o comprimento do primeiro lado do triangulo:\n");
            printf("Informe o comprimento do segundo lado do triangulo:\n");
            printf("Informe o comprimento do terceiro lado do triangulo:\n");
            printf("Os lados informados podem formar um triangulo\n");
            printf("Triangulo Equilatero\n");
            }
            else{
            printf("Informe o comprimento do primeiro lado do triangulo:\n");
            printf("Informe o comprimento do segundo lado do triangulo:\n");
            printf("Informe o comprimento do terceiro lado do triangulo:\n");
            printf("Os lados informados podem formar um triangulo\n");
            printf("Triangulo Isosceles\n");

            }

        }
    }
}
