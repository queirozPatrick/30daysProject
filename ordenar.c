#include <stdio.h>

int main() {
    int numeros[5], i, j, temp;

    // Leitura dos números
    printf("Digite 5 números:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Ordenação usando Bubble Sort
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                // Troca os números
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Exibe os números ordenados
    printf("Números em ordem crescente:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
