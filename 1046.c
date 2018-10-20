    #include <stdio.h>

        int main() {
            
            int num1, num2;
            
            printf("Exercicio 1046 \n");
            printf("----------------------------------------\n");
            printf("Digite a hora do inicio e hora do fim (02 numeros): \n");
            scanf("%d %d", &num1, &num2);

            if (num1 == num2)
            {
                printf("O JOGO DUROU %d HORA (S)\n", 24-num1+num2);
            }else if (num1 <= num2)
            {
                printf("O JOGO DUROU %d HORA (S)\n", num2-num1);
            }else
            {
                printf("O JOGO DUROU %d HORA (S)\n", 24-num1+num2);
            }

             return 0;
            
        }