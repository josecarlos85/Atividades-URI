#include<stdio.h>
	
	int main()
	{
		int cod01, cod02, qtPec01, qtPec02;
		float val01, val02, totalVal;

		printf("Exercicio 1010 \n");
		printf("---------------\n");
		printf("Digite o codigo, quantidade e o valor da peca: \n");
		scanf("%d" "%d" "%f", &cod01, &qtPec01, &val01);
		printf("Digite o codigo, quantidade e o valor da peca: \n");
		scanf("%d" "%d" "%f", &cod02, &qtPec02, &val02);
		
		totalVal = (val01*qtPec01) + (val02*qtPec02);
		
		printf("---------------\n");
		printf("VALOR A PAGAR = R$ %.2f\n", totalVal);
		printf("---------------\n");
		
		return 0;

	}