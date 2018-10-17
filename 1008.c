#include<stdio.h>
	
	int main()
	{
		int numFunc, qtHoras;
		float salHora, salario;

		printf("Exercicio 1008 \n");
		printf("---------------\n");
		printf("Digite o numero do funcionario: \n");
		scanf("%d", &numFunc);
		printf("Digite a quantidade de horas trabalhadas: \n");
		scanf("%d", &qtHoras);
		printf("Digite o valor por hora trabalhada do funcionario: \n");
		scanf("%f", &salHora);
		
		salario = qtHoras * salHora;
		
		printf("---------------\n");
		printf("Funcionario: %d\n", numFunc);
		printf("Salario = R$ %.2f\n", salario);
		printf("---------------\n");
		
		return 0;

	}