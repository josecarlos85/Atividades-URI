#include <stdio.h>

int main()
{
	int idade, anos, meses, dias;

	printf("Exercicio 1020 \n");
	printf("---------------\n");
	printf("Digite a idade em dias: \n");
	scanf("%d", &idade);

	anos = idade / 365;
	meses = (idade % 365) / 30;
	dias = (idade % 365) % 30;

	printf("---------------\n");
	printf("%d ano (s)\n", anos);
	printf("%d mes (es)\n", meses);
	printf("%d dia (s)\n", dias);
	
	return 0;
}