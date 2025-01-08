#include <stdio.h>

int main() {

    char nome[50];
    int idade;
    float altura;

    printf("Seja bem-vindo ao meu programa!\n");

    printf("Qual é o seu nome? ");
    fgets(nome, sizeof(nome), stdin);

    printf("Qual é a sua idade? ");
    scanf("%d", &idade);

    printf("Qual é a sua altura? ");
    scanf("%f", &altura);

    printf("Seu nome é %sVocê tem %d anos e mede %.2f metros de altura.\n", nome, idade, altura);

    return 0;
}
