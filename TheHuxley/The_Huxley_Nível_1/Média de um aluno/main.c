#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a, b, c, d, media;

   scanf("%f", &a);
   scanf("%f", &b);
   scanf("%f", &c);
   scanf("%f", &d);

    media = (a + b + c + d)/4;

    printf("Informe a primeira nota do aluno:\n");
    printf("Informe a segunda nota do aluno:\n");
    printf("Informe a terceira nota do aluno:\n");
    printf("Informe a quarta nota do aluno:\n");
    printf("Media: %.3f\n", media);
}
