#include <stdio.h>

int main(int argc, char const *argv[])
{
	float numero, p =0, maior = 0;
	int i;

	scanf("%f", &numero);

	while(p != 50){

		if(numero > maior){

			maior = numero;
		}

		scanf("%f", &numero);

		p++;
	}


	for (i = 0; i < 50; ++i)
	{
		printf("Digite um numero:\n");

	}


	printf("Maior numero: %.2f\n", maior);
}