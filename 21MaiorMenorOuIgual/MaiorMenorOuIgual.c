#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int numeroJogador, numeroComputador;
    char tipoComparacao;

    srand(time(0));
    numeroComputador = rand() % 100 + 1;

    printf("**Jogo de comparaçao**\n");
    printf("Escolha um valor (entre 1 e 100): ");
    scanf("%d", &numeroJogador);
    printf("Escolha uma opção para comparar:");
    printf("M.Maior\n");
    printf("N.Menor\n");
    printf("I.Igual\n");
    scanf(" %c", &tipoComparacao);

    printf("Número escolhido pelo computador %d\n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
        numeroJogador > numeroComputador ? printf("Você ganhou") : printf("Você perdeu");
        break;
    case 'N':
        numeroJogador < numeroComputador ? printf("Você ganhou") : printf("Você perdeu");
        break;

    case 'I':
        numeroJogador == numeroComputador ? printf("Você ganhou") : printf("Você perdeu");
        break;
    default:
        printf("Opção invalida");
        break;
    }

    return 0;
}