#include <stdio.h>

int main() {
    int opcao;
    double num1, num2, resultado;
    char continuar;

    while (1) {
        printf("\n===============================\n");
        printf("   Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");

        while (1) {
            printf("Opção: ");

            if (scanf("%d", &opcao) != 1) {
                printf("Erro: Entrada inválida. Digite um número entre 1 e 5.\n");
                scanf("%*s");
                continue;
            }

            if (opcao < 1 || opcao > 5) {
                printf("Erro: Opção inválida. Escolha um número entre 1 e 5.\n");
                continue;
            }

            break;
        }

        if (opcao == 5) {
            printf("Obrigado por usar a calculadora! Até a próxima.\n");
            break;
        }

        printf("Digite o primeiro número: ");

        while (scanf("%lf", &num1) != 1) {
            printf("Entrada inválida. Digite um número válido: ");
            scanf("%*s");
        }

        printf("Digite o segundo número: ");

        while (scanf("%lf", &num2) != 1) {
            printf("Entrada inválida. Digite um número válido: ");
            scanf("%*s");
        }

        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2lf + %.2lf = %.2lf\n",
                       num1, num2, resultado);
                break;

            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2lf - %.2lf = %.2lf\n",
                       num1, num2, resultado);
                break;

            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2lf * %.2lf = %.2lf\n",
                       num1, num2, resultado);
                break;

            case 4:
                if (num2 == 0) {
                    printf("Erro: Divisão por zero não é permitida.\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2lf / %.2lf = %.2lf\n",
                           num1, num2, resultado);
                }
                break;
        }

        while (1) {
            printf("Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &continuar);

            if (continuar == 's' || continuar == 'S') {
                break;
            }
            else if (continuar == 'n' || continuar == 'N') {
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                return 0;
            }
            else {
                printf("Resposta inválida. Digite 's' para sim ou 'n' para não.\n");
            }
        }
    }

    return 0;
}
