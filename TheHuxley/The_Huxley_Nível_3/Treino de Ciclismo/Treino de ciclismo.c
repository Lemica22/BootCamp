#include <stdio.h> 

int main(int argc, char const *argv[])
{
	float a;
	int i=1, cont = 0;

	scanf("%f", &a);

	while(i != 7){

		i++;

	if(a >= 8){ 

		cont++;
	}

	scanf("%f", &a);

	}

	if(cont >= 5){
		printf("Desempenho otimo\n");
	}
	else{
		if (cont >=3)
		{
			printf("Desempenho razoavel\n");
		}
		else{
			printf("Desempenho ruim\n");
		}
	}


	return 0;
}