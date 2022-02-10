#include <stdio.h>
#include <stdlib.h>

int main()
{
    double media1, media2, media3, mediaGeral;

    scanf("%lf", &media1);
    scanf("%lf", &media2);
    scanf("%lf", &media3);

    mediaGeral = (2*media1 + 3*media2+ 5*media3)/10;

    printf("MEDIA = %.1lf\n", mediaGeral);
}
