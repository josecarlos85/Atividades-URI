        #include <stdio.h>
        #include <stdlib.h>

            int main() {
                
                float nota1, nota2, nota3, nota4, notaExam, media, mediaFin;
                
                printf("Exercicio 1040 \n");
                printf("----------------------------------------\n");
                printf("Digite as 04 notas do aluno \n");
                scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

                media = ((nota1*2) + (nota2*3) + (nota3*4) + (nota4*1)) / (2 + 3 + 4 + 1);
                if (media >= 7.0)
                {
                    printf("Media: %.1f \n", media);
                    printf("Aluno Aprovado. \n");
                
                }else if (media < 5.0)
                {
                    printf("Media: %.1f \n", media);
                    printf("Aluno Reprovado. \n");
                
                }else if (media >= 5.0 && media <= 6.9)
                {
                    printf("Media: %.1f \n", media);
                    printf("Aluno em exame. \n");
                    printf("Digite a nota do exame: \n");
                    scanf("%f", &notaExam);

                    mediaFin = (media + notaExam)/2;

                    if (mediaFin >= 5.0)
                    {
                        printf("Aluno Aprovado. \n");
                        printf("Media Final: %.1f \n", mediaFin);
                    }else
                    {
                        printf("Aluno Reprovado. \n");
                        printf("Media Final: %.1f \n", mediaFin);
                    }

                }
                    
            return 0;
            }