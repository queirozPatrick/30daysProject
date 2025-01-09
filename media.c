#include <stdio.h>

float nota1, nota2, resultado;
char nome[50];

int main() {
    printf("Qual o nome do aluno?\n");
    scanf("%s", nome);

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    resultado = (nota1 + nota2) / 2;

    if (resultado >= 6) {
        printf("%s Aprovado com a nota %.2f!\n", nome, resultado);
    } else {
        printf("%s Reprovado com a nota %.2f!\n", nome, resultado);
    };
    
    return 0;
}