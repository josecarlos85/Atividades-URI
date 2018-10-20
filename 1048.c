    #include <stdio.h>

        int main() {
            
            double salario, aumento, novoSal, reajuste;
            
            printf("Exercicio 1048 \n");
            printf("----------------------------------------\n");
            printf("Digite o salario atual do funcionario: \n");
            scanf("%lf", &salario);

            if (salario >= 0 && salario <= 400)
            {
                aumento = salario * 0.15;
                novoSal = salario + aumento;
                reajuste = novoSal - salario;
                printf("Novo Salario %.2lf\n", novoSal);
                printf("Reajuste ganho: %.2lf\n", reajuste);
                printf("Em percentual: 15%% \n");

            }else if (salario >= 400.01 && salario <= 800)
            {
                aumento = salario * 0.12;
                novoSal = salario + aumento;
                reajuste = novoSal - salario;
                printf("Novo Salario %.2lf\n", novoSal);
                printf("Reajuste ganho: %.2lf\n", reajuste);
                printf("Em percentual: 12%% \n");

            }else if (salario >= 800.01 && salario <= 1200)
            {
                aumento = salario * 0.10;
                novoSal = salario + aumento;
                reajuste = novoSal - salario;
                printf("Novo Salario %.2lf\n", novoSal);
                printf("Reajuste ganho: %.2lf\n", reajuste);
                printf("Em percentual: 10%% \n");

            }else if (salario >= 1200.01 && salario <= 2000)
            {
                aumento = salario * 0.07;
                novoSal = salario + aumento;
                reajuste = novoSal - salario;
                printf("Novo Salario %.2lf\n", novoSal);
                printf("Reajuste ganho: %.2lf\n", reajuste);
                printf("Em percentual: 7%% \n");

            }else if (salario > 2000)
            {
                aumento = salario * 0.04;
                novoSal = salario + aumento;
                reajuste = novoSal - salario;
                printf("Novo Salario %.2lf\n", novoSal);
                printf("Reajuste ganho: %.2lf\n", reajuste);
                printf("Em percentual: 4%% \n");
            }


             return 0;
            
        }