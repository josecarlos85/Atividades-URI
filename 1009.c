#include<stdio.h>
	
	int main()
	{
		char nome [20];
		float salFixo, vendas, total;

		printf("Exercicio 1009 \n");
		printf("---------------\n");
		printf("Digite o nome de funcionario: \n");
		scanf("%[^\n]s", nome);
		printf("Digite o salario do funcionario: \n");
		scanf("%f", &salFixo);
		printf("Digite o valor total de vendas do vendedor %c: \n", nome);
		scanf("%f", &vendas);
		
		total = salFixo + (vendas * 15 / 100);
		
		printf("---------------\n");
		printf("Funcionario - %s \n", nome);
		printf("Salario total = R$ %.2f\n", total);
		printf("---------------\n");
		
		return 0;

	}