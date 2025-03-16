#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("** Jogo Jokenpô **\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    printf("Computador escolheu: ");
    switch (escolhaComputador) {
        case 1: printf("Pedra\n"); break;
        case 2: printf("Papel\n"); break;
        case 3: printf("Tesoura\n"); break;
    }

    if (escolhaJogador == escolhaComputador) {
        printf("Empate =|\n");
    } else {
        if (escolhaJogador == 1 && escolhaComputador == 3) {
            printf("Você ganhou =)\n");
        }
        else if (escolhaJogador == 2 && escolhaComputador == 1) {
            printf("Você ganhou =)\n");
        }
        else if (escolhaJogador == 3 && escolhaComputador == 2) {
            printf("Você ganhou =)\n");
        }
        else {
            printf("Você perdeu =(\n");
        }
    }

    return 0;
}
