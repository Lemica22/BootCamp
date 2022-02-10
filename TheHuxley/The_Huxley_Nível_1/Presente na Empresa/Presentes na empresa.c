#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int x, y;

	scanf("%d", &x);
	scanf("%d", &y); 

	printf("%.2f\n", x*10 + y*(8.50));
	printf("%.2f\n", (x*10 + y*(8.50))/(x +y));
}