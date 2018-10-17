#include <stdio.h>

int main()
{
	float a, b, c;
	double areaTri;
	double areaCir;
	double areaTrap; 
	double areaQuad;
	double areaRet;
	double pi = 3.14159;

	printf("Exercicio 1012 \n");
	printf("---------------\n");
	printf("Digite os valores de A, B e C: \n");
	scanf("%f" "%f" "%f", &a, &b, &c);

	printf("---------------\n");
	areaTri = (a * c)/2;
	printf("TRIANGULO = %.3f\n", areaTri);
	areaCir = pi * (c * c);
	printf("CIRCULO = %.3f\n", areaCir);
	areaTrap = (a + b)/2 * c;
	printf("TRAPEZIO = %.3f\n", areaTrap);
	areaQuad = b * b;
	printf("QUADRADO = %.3f\n", areaQuad);
	areaRet = a * b;
	printf("RETANGULO = %.3f\n", areaRet);	
	
	return 0;
}