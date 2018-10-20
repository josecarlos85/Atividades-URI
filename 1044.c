    #include <stdio.h>

        int main() {
            
            int num1, num2;
            
            printf("Exercicio 1044 \n");
            printf("----------------------------------------\n");
            printf("Digite 02 numeros: \n");
            scanf("%d %d", &num1, &num2);

            if (num1 % num2 == 0 || num2 % num1 ==0) 
                
                {
                printf("Sao Multiplos");
                    
                }else{

                printf("Nao sao multiplos");
            }

             
            return 0;
            
        }