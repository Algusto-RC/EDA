#include <stdio.h>
#include <stdlib.h>

int main()
{
	//DECLARACOES:
	int c1, c2, c3, r, ru;

	//MAIN:
	scanf("%d %d %d", &c1, &c2, &c3);
	setbuf(stdin, NULL);
	scanf("%d", &ru);
	r = c1+c2+c3;

	if(r == ru)
	{	
		printf("Acertou\n");
	}else{
		printf("Errou\n");
	}

	return 0;
}
