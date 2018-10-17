#include <stdio.h>

int main()
{
	int durSeg, horas, minutos, segundos;

	printf("Exercicio 1019 \n");
	printf("---------------\n");
	printf("Digite a duracao em segundos: \n");
	scanf("%d", &durSeg);

	horas = durSeg / 3600;
	minutos = durSeg % 3600/60;
	segundos = durSeg % 60;

	printf("---------------\n");
	printf("%d : %d : %d \n" , horas, minutos, segundos);
	
	
	
	return 0;
}