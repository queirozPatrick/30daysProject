#include <stdio.h>

int main() {
    int numero;

    // Solicita o número ao usuário
    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &numero);

    // Calcula e exibe a tabuada utilizando o laço 'for'
    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
