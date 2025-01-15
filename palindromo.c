#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100], invertida[100];
    int i, tamanho;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    // Inverter a string
    for (i = 0; i < tamanho; i++) {
        invertida[i] = palavra[tamanho - i - 1];
    }
    invertida[tamanho] = '\0'; // Adiciona o caractere nulo

    // Verificar se é um palíndromo
    if (strcmp(palavra, invertida) == 0) {
        printf("'%s' é um palíndromo!\n", palavra);
    } else {
        printf("'%s' não é um palíndromo.\n", palavra);
    }

    return 0;
}
