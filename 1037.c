#include <stdio.h>

int main() {
    
    double numero;
    
    printf("Exercicio 1037 \n");
    printf("---------------\n");
    printf("Digite um numero: \n");
    scanf("%lf", &numero);
    
    if (numero >= 0 && numero <= 25)
    {
        printf("Intervalo [0,25]\n");
        
    } else if ( numero > 25 && numero <= 50)
    {
       printf("Intervalo (25,50]\n");
       
    } else if (numero > 50 && numero <= 75)
    {
        printf("Intervalo (50,75]\n");
        
    } else if (numero > 75 && numero <= 100)
    {
        printf("Intervalo (75,100] \n");
        
    } else if (numero < 0 || numero > 100) {

        printf("numero fora dos intevalos");
    }

    return 0;
}