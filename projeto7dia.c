#include <stdio.h>

#define MAX_PESSOAS 5 // Número máximo de cadastros

int main() {
    char nomes[MAX_PESSOAS][50];
    int idades[MAX_PESSOAS];
    char generos[MAX_PESSOAS];
    int qtd_cadastrados = 0;

    printf("Sistema de Cadastro Simples\n");
    printf("-----------------------------\n");

    // Loop para cadastrar até 5 pessoas
    for (int i = 0; i < MAX_PESSOAS; i++) {
        printf("\nCadastro #%d:\n", i + 1);

        // Recebe o nome
        printf("Digite o nome: ");
        scanf(" %[^\n]", nomes[i]);

        // Recebe a idade
        printf("Digite a idade: ");
        scanf("%d", &idades[i]);

        // Recebe o gênero
        printf("Digite o gênero (M/F/): ");
        scanf(" %c", &generos[i]);

        qtd_cadastrados++;

        // Pergunta ao usuário se deseja continuar
        if (i < MAX_PESSOAS - 1) {
            char opcao;
            printf("Deseja cadastrar outra pessoa? (S/N): ");
            scanf(" %c", &opcao);
            if (opcao == 'N' || opcao == 'n') {
                break; // Sai do loop se o usuário não quiser cadastrar mais pessoas
            }
        }
    }

    // Exibe os cadastros realizados
    printf("\nLista de Pessoas Cadastradas:\n");
    for (int i = 0; i < qtd_cadastrados; i++) {
        printf("\nPessoa #%d:\n", i + 1);
        printf("Nome: %s\n", nomes[i]);
        printf("Idade: %d\n", idades[i]);
        printf("Gênero: %c\n", generos[i]);
    }

    return 0;
}
