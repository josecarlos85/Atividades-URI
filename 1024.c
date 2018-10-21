#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
    
    int qtdeLinhas, i=0, x;
    char mensagem[10000];
    
    printf("Exercicio 1065 \n");
    printf("----------------------------------------\n");
    printf("Digite a quantidade de linhas que o programa irá tratar");
    scanf("%d\n", &qtdeLinhas);

    while(i < qtdeLinhas){
        
        int j=0;
        scanf(" %[^\n]s\n", mensagem);

        x = strlen(mensagem);

        while(j < x){
            int k;
            if(mensagem[j] >= 'a' && mensagem[j] <= 'z'){
                mensagem[j] = mensagem[j] + 3;
            }else if(mensagem[j] >= 'A' && mensagem[j] <= 'Z'){
                mensagem[j] = mensagem[j] + 3;
            }

        j++;

        }

        char c;
        int m;

        for(m=0; m<x/2;m++){
            c = mensagem[m];
            mensagem[m] = mensagem[x-1-m];
            mensagem[x-1-m] = c;
        }
        int a, b;
        
        for (a = x/2; a < x; a++)
        {
            mensagem[a] = mensagem[a] - 1;

        }
        printf("%s\n", mensagem);
        
    i++;
    }


   return 0;
}