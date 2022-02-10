#include <stdio.h> 

int main(int argc, char const *argv[])
{
	float x, y;

	scanf("%f", &x);
	scanf("%f", &y);

	printf("%.2f\n",x +y - x*(0.05));


	return 0;
}