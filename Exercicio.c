#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ContadoMax 100


struct Agenda
{
   int codigo[50];
    char nome[50];
    char telefone[20];
};

typedef struct Agenda Agenda;

int num_contatos = 0;
Agenda agenda[ContadoMax];

int main() {
    int opcao = 0;
    while (opcao != 5) {
        printf("\n-- AGENDA --\n");
        printf("1. Cadastrar\n");
        printf("2. Listar\n");
        printf("3. Ordenar\n");
        printf("4. Consultar\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                listar();
                break;
            case 3:
                ordenar();
                break;
            case 4:
                consultar();
                break;
            case 5:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    }
    return 0;
}

void cadastrar() {
    if (num_contatos < ContadoMax) {
        Agenda c;
        printf("Digite o codigo: ");
        scanf("%s", c.codigo);
        printf("Digite o nome: ");
        scanf("%s", c.nome);
        printf("Digite o telefone: ");
        scanf("%s", c.telefone);
        agenda[num_contatos] = c;
        num_contatos++;
        printf("Contato cadastrado com sucesso!\n");
    } else {
        printf("Agenda cheia!\n");
    }
}

void listar() {
    printf("Lista de contatos:\n");
    for (int i = 0; i < num_contatos; i++) {
        printf("%s - %s - %s\n",agenda[i].codigo, agenda[i].nome, agenda[i].telefone);
    }
}

void ordenar() {

      //--------------------------------------------//
     //     Nao consegui terminar o ordernar       // 
    //--------------------------------------------//

}

void consultar() {
    char nome_consulta[50];
    printf("Digite o nome do contato: ");
    scanf("%s", nome_consulta);
    for (int i = 0; i < num_contatos; i++) {
        if (strcmp(agenda[i].nome, nome_consulta) == 0) {
            printf("%s - %s\n", agenda[i].nome, agenda[i].telefone);
            return;
        }
    }
    printf("Contato não encontrado.\n");
}


