#include <stdio.h>
#include <stdlib.h>

int main()
{
    double media1, media2, mediaGeral;

    scanf("%lf", &media1);
    scanf("%lf", &media2);

    mediaGeral = (3.5*media1 + 7.5*media2)/11;

    printf("MEDIA = %.5lf\n", mediaGeral);
}
