    #include <stdio.h>

        int main() {
            
            int cod;
            
            printf("Exercicio 1050 \n");
            printf("----------------------------------------\n");
            printf("Digite o codigo de area desejado: \n");
            scanf("%d", &cod);

            switch (cod)
            {
                case 61: printf("\n Brasilia \n"); break;

                case 71: printf("\n Salvador \n"); break;

                case 11: printf("\n Sao Paulo \n"); break;

                case 21: printf("\n Rio de Janeiro \n"); break;

                case 32: printf("\n Juiz de Fora \n"); break;

                case 19: printf("\n Campinas \n"); break;

                case 27: printf("\n Vitoria \n"); break;

                case 31: printf("\n Belo Horizonte \n"); break;

                default: printf("\n DDD Nao cadastrado \n"); break;

            }


             return 0;
            
        }