#include <stdio.h>

        int main() {
                        
            float x, y;
                        
            printf("Exercicio 1041 \n");
                        printf("----------------------------------------\n");
                        printf("Digite as coordenadas do ponto: \n");
                        scanf("%f %f", &x, &y);

                        if (x > 0 && y > 0)
                        {
                            printf("\n Q1 \n");

                        }else if (x < 0 && y > 0)
                        {
                            printf("\n Q2 \n");

                        }else if (x < 0 && y < 0)
                        {
                            printf("\n Q3 \n");

                        }else if (x > 0 && y <0 )
                        {
                            printf("\n Q4 \n");
                        
                        }else if (x == 0 && y == 0)
                        {
                            printf ("\n Origem \n");
                        }
                    return 0;
                    
                    }           