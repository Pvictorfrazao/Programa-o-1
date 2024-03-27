#include <stdio.h>
#include <stdbool.h>

// Estrutura para armazenar informa��es da conta
typedef struct {
    float saldo;
    int numeroConta;
    bool ativa;
} Conta;

// Constante para o limite m�ximo de contas
const int MAX_CONTAS = 50;

// Vari�veis globais
int contasAbertas = 0;

// Fun��es
void AbrirConta(Conta *contas, float saldoInicial) {
    if (contasAbertas >= MAX_CONTAS) {
        printf("Limite de contas atingido.\n");
        return;
    }

    if (saldoInicial < 0) {
        printf("O saldo inicial deve ser n�o negativo.\n");
        return;
    }

    for (int i = 0; i < MAX_CONTAS; i++) {
        if (!contas[i].ativa) {
            contas[i].ativa = true;
            contas[i].saldo = saldoInicial;
            contas[i].numeroConta = 1001 + i;
            contasAbertas++;
            printf("Conta aberta com sucesso. N�mero da conta: %d\n", contas[i].numeroConta);
            return;
        }
    }
    printf("Erro ao abrir conta.\n");
}

// Fun��o ConsultarConta e demais fun��es mantidas sem altera��es...

int main() {
    Conta banco[MAX_CONTAS];
    char operacao;
    float dinheiro;
    int conta;

    // Inicializando contas
    for (int i = 0; i < MAX_CONTAS; i++) {
        banco[i].saldo = 0;
        banco[i].numeroConta = 1001 + i;
        banco[i].ativa = false;
    }

    // Menu principal
    do {
        printf("### MENU ###\n");
        printf("O - Abrir conta\n");
        printf("B - Consultar\n");
        printf("D - Deposito\n");
        printf("W - Saque\n");
        printf("C - Fechar\n");
        printf("P - Imprimir tudo\n");
        printf("E - Sair\n");
        printf("Escolha: ");
        scanf(" %c", &operacao);

        switch (operacao) {
            case 'O':
                printf("Digite um saldo para o dep�sito: ");
                scanf("%f", &dinheiro);
                AbrirConta(banco, dinheiro);
                break;
            // Demais cases mantidos sem altera��es...
            default:
                printf("Op��o Inv�lida.\n");
        }
    } while (operacao != 'E');

    return 0;
}
