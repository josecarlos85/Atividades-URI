    #include <stdio.h>

        int main() {
            
            int h1, m1, h2, m2, hora, min;
            
            printf("Exercicio 1047 \n");
            printf("----------------------------------------\n");
            printf("Digite a hora e minutos do inicio e hora e minutos do fim (04 numeros): \n");
            scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

            if (h1 == m2 && h2 == m2 && m2 == m1)
            {
                min = m1 - m2;
                hora = 24 + h1 - h2;
                printf("O JOGO DUROU %d HORA (S) E %d MINUTO (S)\n", hora, min );
            }else if (h1 == h2 && m2 > m1)
            {
                min = m2 - m1;
                hora = h1 - h2;
                printf("O JOGO DUROU %d HORA (S) E %d MINUTO (S)\n", hora, min);
            }else if (h1 == h2 && m1 > m2)
            {
                min = 60 - m1 + m2;
                hora = 24 - h1 + h2 + 1;
                printf("O JOGO DUROU %d HORA (S) E %d MINUTO (S)\n", hora, min);
            }else if (m1 == m2 && h1 < h2)
            {
                min = 0;
                hora = h2 - h1;
                printf("O JOGO DUROU %d HORA (S) E %d MINUTO (S)\n", hora, min);    
            }else if (m1 == m2 && h1 > h2)
            {
                min = 0;
                hora = 24 - h1 + h2;
                printf("O JOGO DUROU %d HORA (S) E %d MINUTO (S)\n", hora, min);
            }else if (h2 > h1 && m2 > m1)
            {
                min = m2 - m1;
                hora = h2 - h1;
                printf("O JOGO DUROU %d HORA (S) E %d MINUTO (S)\n", hora, min);
            }else if (h1 < h2 && m1 > m2)
            {
                min = 60 - m1 + m2;
                hora = h2 - h1 -1;
                printf("O JOGO DUROU %d HORA (S) E %d MINUTO (S)\n", hora, min);
            }else if (h1 > h2 && m1 < m2)
            {
                min = m2 - m1;
                hora = 24 - h1 - 1 + h2;
                printf("O JOGO DUROU %d HORA (S) E %d MINUTO (S)\n", hora, min);
            }else if (h1 > h2 && m1 > m2)
            {
                min = 60 + m2 -m1;
                hora = 24 + h2 - h1 -1;
                printf("O JOGO DUROU %d HORA (S) E %d MINUTO (S)\n", hora, min);
            }

             return 0;
            
        }