    #include <stdio.h>

        int main() {
            
            double num1, num2, num3;
            
            printf("Exercicio 1043 \n");
            printf("----------------------------------------\n");
            printf("Digite 03 numeros reais: \n");
            scanf("%lf %lf %lf", &num1, &num2, &num3);

            if (num1 < num2 + num3 && num2 < num1 + num3 && num3 < num2 + num3) 
                
                {
                printf("Perimetro = %.1lf\n", num1+num2+num3);
                    
                }else{

                printf("Area = %.1lf\n", (num1 + num2)*num3 /2);
            }

             
            return 0;
            
        }