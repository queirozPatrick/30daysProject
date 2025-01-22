#include <stdio.h>

struct Estudante {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Estudante aluno;

    // Entrada de dados
    printf("Digite o nome do estudante: ");
    scanf("%s", aluno.nome);

    printf("Digite a idade do estudante: ");
    scanf("%d", &aluno.idade);

    printf("Digite a nota do estudante: ");
    scanf("%f", &aluno.nota);

    // Exibição dos dados
    printf("\nDados do Estudante:\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f\n", aluno.nota);

    return 0;
}
