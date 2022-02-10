#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double h, i, l, volume;

	scanf("%lf", &h);
	scanf("%lf", &i);
	scanf("%lf", &l);

	volume = h*(l*l + sqrt(l*l*i*i) + i*i)/3;

	printf("%.1lf\n", volume);


	return 0; 
}
