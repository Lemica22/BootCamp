#include <stdio.h>

int main(int argc, char const *argv[])
{
	double salario, bonus;

	scanf("%lf", &salario);

	bonus = salario*(0.75);

	if(bonus < 2000){
		printf("ARGENTINA\n");
	}
	else{
		if(bonus <3000){
			printf("ESPANHA\n");
		}
		else{
			printf("ALEMANHA\n");
		}
	}

	return 0;
}