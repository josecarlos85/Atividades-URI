#include <stdio.h>

    int main() {
        
        int cod, qtde;
        double total;
        total = 0;
        
        printf("Exercicio 1038 \n");
        printf("----------------------------------------\n");
        printf(" - CODIGO  -  ESPECIFICACAO  -  PRECO  - \n");
        printf(" -    1    - Cachorro Quente - R$ 4,00 - \n");
        printf(" -    2    -    X-Salada     - R$ 4,50 - \n");
        printf(" -    3    -    X-Bacon      - R$ 5,00 - \n");
        printf(" -    4    - Torrada Simples - R$ 2,00 - \n");
        printf(" -    5    -  Refrigerante   - R$ 1,50 - \n");        
        printf("---------------------------------------- \n");
        printf("\n");
        printf("Digite o codigo do produto e a quantidade desejada: \n");
        scanf("%d %d", &cod, &qtde);
        
        switch (cod)
        { 
            case 1:
            total = qtde * 4;
            printf("Total: R$ %.2f \n", total);
            break;

            case 2:
            total = qtde * 4.50;
            printf("Total: R$ %.2f \n", total);
            break;

            case 3:
            total = qtde * 5;
            printf("Total: R$ %.2f \n", total);
            break;

            case 4:
            total = qtde * 2;
            printf("Total: R$ %.2f \n", total);
            break;

            case 5:
            total = qtde * 1.50;
            printf("Total: R$ %.2f\n", total);
            break;
        }
         return 0;
    }