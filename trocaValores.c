#include <stdio.h>

void trocarValores(int *a, int *b);

int main() {
    int x, y;
    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);

    printf("Antes da troca: x = %d, y = %d\n", x, y);
    trocarValores(&x, &y); // Passagem por referência
    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}

void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
