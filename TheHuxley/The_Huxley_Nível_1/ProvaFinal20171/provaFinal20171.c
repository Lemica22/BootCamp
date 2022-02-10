#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int valores, i = 0, vec[10], soma =0, maior =-999;

	scanf("%d", &valores);

	while( i != 10){

		vec[i] = valores;

		if(valores >= maior){

			maior = valores;
		}

		i++;

		scanf("%d", &valores);
	}

	
	for (i = 0; i < 10; ++i)
	{
		if(vec[i]== maior){

			soma = soma + i; 
		}
	}

	printf("%d\n", soma);
	
}
