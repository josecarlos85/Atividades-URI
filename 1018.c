#include <stdio.h>

int main()
{
	int valor, div;

	printf("Exercicio 1018 \n");
	printf("---------------\n");
	printf("Digite o valor desejado: \n");
	scanf("%d", &valor);	 
	
	printf("---------------\n");
	printf("%d nota (s) de R$ 100,00\n", valor/100);
	div = (valor%100);
	printf("%d nota (s) de R$ 50,00\n", div/50);
	div = (div%50);
	printf("%d nota (s) de R$ 20,00\n", div/20);
	div = (div%20);
	printf("%d nota (s) de R$ 10,00\n", div/10);
	div = (div%10);
	printf("%d nota (s) de R$ 5,00\n", div/5);
	div = (div%5);
	printf("%d nota (s) de R$ 2,00\n", div/2);
	div = (div%2);
	printf("%d nota (s) de R$ 1,00\n", div/1);
	div = (div%1);
	
	return 0;
}