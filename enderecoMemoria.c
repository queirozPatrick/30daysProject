#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *ptrA = &a, *ptrB = &b;

    printf("Endereço de a: %p, Valor de a: %d\n", (void *)ptrA, *ptrA);
    printf("Endereço de b: %p, Valor de b: %d\n", (void *)ptrB, *ptrB);

    return 0;
}
