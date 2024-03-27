#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int escolhaJogador = -1, escolhaComputador;
    int vitoria = 0, derrota = 0;
    srand(time(NULL));

    while (escolhaJogador != 4) {
        printf("Bem-Vindo ao jogo do Pedra, Papel e Tesoura!\n");
        printf("Escolha a sua jogada\n");
        printf("1- Pedra\n");
        printf("2- Papel\n");
        printf("3- Tesoura\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolhaJogador);

        escolhaComputador = rand() % 90;

        switch (escolhaJogador) {
            case 1:
                if (escolhaComputador >= 0 && escolhaComputador < 30)
                    printf("Empate!\n");
                else if (escolhaComputador >= 30 && escolhaComputador < 60) {
                    printf("Computador Ganhou!\n");
                    derrota++;
                } else {
                    printf("Você Ganhou!\n");
                    vitoria++;
                }
                break;
            case 2:
                if (escolhaComputador >= 0 && escolhaComputador < 30) {
                    printf("Você Ganhou!\n");
                    vitoria++;
                } else if (escolhaComputador >= 30 && escolhaComputador < 60)
                    printf("Empate!\n");
                else {
                    printf("Computador Ganhou!\n");
                    derrota++;
                }
                break;
            case 3:
                if (escolhaComputador >= 0 && escolhaComputador < 30) {
                    printf("Computador Ganhou!\n");
                    derrota++;
                } else if (escolhaComputador >= 30 && escolhaComputador < 60) {
                    printf("Você Ganhou!\n");
                    vitoria++;
                } else
                    printf("Empate!\n");
                break;
            case 4:
                break;
            default:
                printf("Comando invalido!\n");
        }
        printf("\n\n ------------------------------------ \n\n");
    }

    printf("\n ------- SCORE! ------- \n");
    printf("VITORIAS: %d\n", vitoria);
    printf("DERROTAS: %d\n", derrota);
    printf("Obrigado por jogar!\n");
}
