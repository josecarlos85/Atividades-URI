 #include <stdio.h>

        int main() {
            
            double numA, numB, numC;
            numC = 0;
            
            printf("Exercicio 1060 \n");
            printf("----------------------------------------\n");
            
            for (numA = 1; numA <= 6; numA++)
            {
            	printf("Digite um numero positivo ou negativo: \n");
            	scanf("%lf", &numB);
            	if (numB > 0) numC++;
            }

            printf("\n %.0lf valores positivos\n", numC);

            return 0;

        }
