    #include <stdio.h>

        int main() {
            
            int num;
            
            printf("Exercicio 1052 \n");
            printf("----------------------------------------\n");
            printf("Digite um numero de 1 ate 12: \n");
            scanf("%d", &num);

            switch (num)
            {
                case 1: printf("\n January \n"); break;

                case 2: printf("\n February \n"); break;

                case 3: printf("\n March \n"); break;

                case 4: printf("\n April \n"); break;

                case 5: printf("\n May \n"); break;

                case 6: printf("\n June \n"); break;

                case 7: printf("\n July \n"); break;

                case 8: printf("\n August \n"); break;

                case 9: printf("\n September \n"); break;

                case 10: printf("\n October \n"); break;

                case 11: printf("\n November \n"); break;

                case 12: printf("\n December \n"); break;

                default: printf("\n Numero invalido \n"); break;

            }


             return 0;
            
        }