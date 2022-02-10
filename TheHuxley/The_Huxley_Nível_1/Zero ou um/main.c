#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A;
   int B;
   int C;

   scanf("%d", &A);
   scanf("%d", &B);
   scanf("%d", &C);

   if((A == B)&&(B != C)){
    printf("C\n");
   }
   if((A == C)&&(B != C)){
    printf("B\n");
   }
   if((B == C)&&(B != A)){
    printf("A\n");
   }
   if((A==B)&&(B==C)){
    printf("*\n");
   }

}
