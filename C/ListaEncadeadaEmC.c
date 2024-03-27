#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Pessoa {
    char nome[50];
    int idade;
    float salario;
    struct Pessoa* proximo;
} Pessoa;

Pessoa* BuscarLista(Pessoa* cabeca, const char* nome) {
    Pessoa* busca = cabeca;

    while (busca != NULL) {
        if (strcmp(busca->nome, nome) == 0) {
            return busca;
        }
        busca = busca->proximo;
    }

    return NULL;
}

Pessoa* InserirLista(Pessoa* cabeca, const char* nome) {
    Pessoa* busca = BuscarLista(cabeca, nome);

    if (busca == NULL) {
        return NULL;
    }

    Pessoa* nova = (Pessoa*)malloc(sizeof(Pessoa));
    if (nova == NULL) {
        return NULL; // Falha na alocação de memória
    }

    nova->proximo = busca->proximo;
    busca->proximo = nova;

    return nova;
}

bool AlterarLista(Pessoa* cabeca, const char* nome) {
    Pessoa* busca = BuscarLista(cabeca, nome);

    if (busca == NULL) {
        return false; // Elemento não encontrado
    }

    char nomeAlternativo[50];
    int idadeAlternativa;
    float salarioAlternativo;

    printf("Digite o novo nome: ");
    fgets(nomeAlternativo, sizeof(nomeAlternativo), stdin);
    nomeAlternativo[strcspn(nomeAlternativo, "\n")] = '\0'; // Remover o caractere de nova linha

    printf("Digite a idade: ");
    scanf("%d", &idadeAlternativa);
    printf("Digite o salario: ");
    scanf("%f", &salarioAlternativo);

    // Limpar o buffer do teclado
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    strcpy(busca->nome, nomeAlternativo);
    busca->idade = idadeAlternativa;
    busca->salario = salarioAlternativo;

    return true; // Alteração bem sucedida
}

void LiberarLista(Pessoa* cabeca) {
    Pessoa* atual = cabeca;
    while (atual != NULL) {
        Pessoa* temp = atual;
        atual = atual->proximo;
        free(temp);
    }
}

int main() {
    system("cls || clear");
    Pessoa* lista = (Pessoa*)malloc(sizeof(Pessoa));

    Pessoa* elemento1 = (Pessoa*)malloc(sizeof(Pessoa));
    Pessoa* elemento2 = (Pessoa*)malloc(sizeof(Pessoa));

    if (lista == NULL || elemento1 == NULL || elemento2 == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    strcpy(lista->nome, "Joao");
    strcpy(elemento1->nome, "Pedro");
    strcpy(elemento2->nome, "Maria");

    lista->proximo = elemento1;
    elemento1->proximo = elemento2;
    elemento2->proximo = NULL;

    if (AlterarLista(lista, "Pedro")) {
        printf("Nome alterado com sucesso.\n");
    } else {
        printf("Erro: elemento não encontrado.\n");
    }

    printf("Novo Nome: %s\n", elemento1->nome);

    LiberarLista(lista); // Liberar a memória alocada

    return 0;
}
