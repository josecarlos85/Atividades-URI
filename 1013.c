#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, maiorAB, maior;

	printf("Exercicio 1013 \n");
	printf("---------------\n");
	printf("Digite 03 numeros inteiros: \n");
	scanf("%d" "%d" "%d", &a, &b, &c);

	maiorAB = (a+b+abs(a-b))/2;
	maior = (maiorAB + c + abs(maiorAB-c))/2; 
	
	printf("---------------\n");
	printf("%d eh o maior\n", maior);
	

	return 0;
}