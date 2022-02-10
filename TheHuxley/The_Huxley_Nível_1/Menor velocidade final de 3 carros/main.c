#include <stdio.h>
#include <stdlib.h>

int main()
{
    float va, aa, ta;
    float vb, ab, tb;
    float vc, ac, tc;

    float VA, VB, VC;

    float menor = 99999;

    scanf("%f%f%f", &va, &aa, &ta);
    scanf("%f%f%f", &vb, &ab, &tb);
    scanf("%f%f%f", &vc, &ac, &tc);

    VA = va*3.6 + aa*(3.6)*ta;
    VB = vb*3.6 + ab*(3.6)*tb;
    VC = vc*3.6 + ac*(3.6)*tc;

    if(VA < menor){
        menor = VA;
    }
      if(VB < menor){
        menor = VB;
    }
      if(VC < menor){
        menor = VC;
    }

    printf("%.1f\n", menor);


}
