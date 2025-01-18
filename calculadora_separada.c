#include <stdio.h>

// Declaração das funções
int soma(int a, int b);
int subtracao(int a, int b);
int multiplicacao(int a, int b);
float divisao(int a, int b);

int main() {
    int opcao, num1, num2;
    printf("Escolha uma operação:\n");
    printf("1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão\n");
    scanf("%d", &opcao);

    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

    switch (opcao) {
        case 1:
            printf("Resultado: %d\n", soma(num1, num2));
            break;
        case 2:
            printf("Resultado: %d\n", subtracao(num1, num2));
            break;
        case 3:
            printf("Resultado: %d\n", multiplicacao(num1, num2));
            break;
        case 4:
            printf("Resultado: %.2f\n", divisao(num1, num2));
            break;
        default:
            printf("Opção inválida.\n");
    }
    return 0;
}

// Definições das funções
int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else {
        printf("Erro: Divisão por zero.\n");
        return 0.0;
    }
}
