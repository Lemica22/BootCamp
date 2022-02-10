#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int cod, quant, valor;

	scanf("%d", &cod);
	scanf("%d", &quant);

	if(cod == 1){

		valor = (5.3)*quant;

		if((valor >=40)||(quant >= 15)){

		printf("R$ %.2f\n", (5.3)*quant*(0.85));
		}
		else{
			printf("R$ %.2f\n", (5.3)*quant);
		}
	}
	if(cod == 2){

		valor = (6)*quant;


		if((valor >=40)||(quant >= 15)){

		printf("R$ %.2f\n", 6*quant*(0.85));
		}
		else{
			printf("R$ %i\n", 6*quant);
		}
	}
	if(cod == 3){

		valor = (3.2)*quant;


		if((valor >=40)||(quant >= 15)){

		printf("R$ %.2f\n", (3.2)*quant*(0.85));
		}
		else{
		printf("R$ %.2f\n", (3.2)*quant);
	}
	}
	if(cod == 4){

		valor = (2.5)*quant;


		if((valor >=40)||(quant >= 15)){

		printf("R$ %.2f\n", (2.5)*quant*(0.85));
		}



	else{	printf("R$ %.2f\n", (2.5)*quant);
}
	}

	return 0;
}