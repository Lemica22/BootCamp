#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int x, y;

	scanf("%d%d", &x, &y);

	if(x == 0){
		if(y == 1){
			printf("1\n");
		}
		else{
			printf("0\n");
		}
	}
	else {
		printf("0\n");
	}

}