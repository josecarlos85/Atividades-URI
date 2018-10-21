 #include <stdio.h>

        int main() {
            
            int numA, numB, numC;
            numC = 0;
            
            printf("Exercicio 1065 \n");
            printf("----------------------------------------\n");
            
            for (numA = 1; numA <= 5; numA++)
            {
            	printf("Digite um numero positivo ou negativo: \n");
            	scanf("%d", &numB);
            	if (numB % 2 == 0) numC++;
            }

            printf("\n %d valores pares\n", numC);

            return 0;

        }
