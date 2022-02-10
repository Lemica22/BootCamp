#include <stdio.h> 

int main(int argc, char const *argv[])
{
	int a, b, c;
	int aux;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if(b > a){

	aux = a;
	a = b;
	b = aux;

	}
	if(c > a){
		
	aux = a;
	a = c;
	c = aux;

	}
	if(c > b){
		
	aux = b;
	b = c;
	c = aux;

	}

printf("%d\n", b);

	return 0;
}