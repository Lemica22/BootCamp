#include <stdio.h> 

int main(int argc, char const *argv[])
{
	int quantidade, i, cont =0;
	
	float numero;

	scanf("%d", &quantidade);

	scanf("%f", &numero);

	for( i = 0; i < quantidade ; i++){

		while(numero >=1){

			cont ++;

			numero = numero/2;
		}

	printf("%d dias\n", cont);

	cont = 0;

	scanf("%f", &numero); 

	}
	return 0;
}