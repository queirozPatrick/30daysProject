#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100

typedef struct {
    char nome[50];
    char telefone[15];
} Contato;

int main() {
    Contato contatos[MAX_CONTATOS];
    int quantidade = 0;
    int opcao;

    do {
        printf("\n=== Gerenciador de Contatos ===\n");
        printf("1. Adicionar Contato\n");
        printf("2. Visualizar Contatos\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer

        if (opcao == 1) {
            if (quantidade >= MAX_CONTATOS) {
                printf("\nLista cheia!\n");
            } else {
                printf("\nDigite o nome: ");
                fgets(contatos[quantidade].nome, sizeof(contatos[quantidade].nome), stdin);
                contatos[quantidade].nome[strcspn(contatos[quantidade].nome, "\n")] = 0;

                printf("Digite o telefone: ");
                fgets(contatos[quantidade].telefone, sizeof(contatos[quantidade].telefone), stdin);
                contatos[quantidade].telefone[strcspn(contatos[quantidade].telefone, "\n")] = 0;

                quantidade++;
                printf("\nContato adicionado!\n");
            }
        } else if (opcao == 2) {
            if (quantidade == 0) {
                printf("\nNenhum contato para exibir.\n");
            } else {
                printf("\n=== Lista de Contatos ===\n");
                for (int i = 0; i < quantidade; i++) {
                    printf("%d. Nome: %s, Telefone: %s\n", i + 1, contatos[i].nome, contatos[i].telefone);
                }
            }
        } else if (opcao != 3) {
            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 3);

    printf("\nPrograma encerrado.\n");
    return 0;
}
