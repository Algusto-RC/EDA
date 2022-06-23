#include <stdio.h>
#include <stdlib.h>

int main()
{
	//DECLARACOES:
	int num=0, resultado=0, ctt=0, encerra=0;
	
	//INICIO
	do{
		ctt = scanf("%d",&num);
		if(ctt != EOF){
			resultado++;
		}else{
			encerra = 1;
		}

	}while(encerra != 1);

	printf("%d\n", resultado);
	
	return 0;
}
