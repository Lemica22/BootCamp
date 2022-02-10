#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c;
	int d, e, f;
	int g, h, i;

	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d %d", &d, &e, &f);

	if((d >= a)&&(e >= b)&&(f >=c)){

		g = d/a;
		h = e/b;
		i = f/c;

		printf("%d\n", g*h*i);

	}
	else{
		printf("0\n");
	} 


	return 0;
}