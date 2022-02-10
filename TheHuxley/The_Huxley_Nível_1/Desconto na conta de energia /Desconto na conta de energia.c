#include <stdio.h>

int main(int argc, char const *argv[])
{
	char bairro;
	int renda;
	int consumo;

	scanf("%s", &bairro);
	scanf("%i", &renda);
	scanf("%i", &consumo);


	if ((bairro == 'S')||(bairro == 'I')||(bairro == 'T'))
	{
		if(bairro == 'S'){

			if((renda < 0)||(consumo <0)){

				printf("Renda e consumo nao podem ser negativos. \n");
			}
			else{
				if((renda >=50)&&(renda <= 500)){

					consumo = consumo -50;

					printf("%i\n", consumo);
				}
				else{
					if((renda > 500)&&(renda <=1000)){
						consumo = consumo -25;

						printf("%i\n", consumo);
					}
					else{
						printf("%d\n", consumo);
					}
				}
			}
		}
		if(bairro == 'I'){

			if((renda < 0)||(consumo <0)){

				printf("Renda e consumo nao podem ser negativos. \n");
			}
			else{
				if((renda >=240)&&(renda <= 1000)){

					consumo = consumo -240;

					printf("%i\n", consumo);
				}
				else{
					if((renda > 1000)&&(renda <=5000)){
						consumo = consumo -120;

						printf("%i\n", consumo);
					}
					else{
						printf("%d\n", consumo);
					}
				}
			}
		}
		if(bairro == 'T'){

			if((renda < 0)||(consumo <0)){

				printf("Renda e consumo nao podem ser negativos. \n");
			}
			else{
				if((renda >5000)&&(renda <= 10000)){

					consumo = consumo -720;

					printf("%i\n", consumo);
				}
				else{
					if((renda > 10000)&&(renda <=20000)){
						consumo = consumo -360;

						printf("%i\n", consumo);
					}
					else{
						printf("%d\n", consumo);
					}
				}
			}
		}
	}
	else{

		printf("Bairro invalido.\n");
	}



	return 0;
}