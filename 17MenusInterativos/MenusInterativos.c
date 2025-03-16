#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int opcao;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Iniciando o jogo...\n");
        // Código para iniciar o jogo
        break;
    case 2:
        printf("Regras do Jogo:\n");
        printf("1. Regra 1\n");
        printf("2. Regra 2\n");
        printf("3. Regra 3\n");
        // Código para exibir as regras
        break;
    case 3:
        printf("Saindo...\n");
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
    }

    printf("-----------------------------------------\n");

    int opcao2;
  int numeroSecreto, palpite;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao2);

  switch (opcao2) {
    case 1:
      srand(time(0));
      numeroSecreto = rand() % 10 + 1;
      printf("Adivinhe o número (entre 1 e 10): \n");
      scanf("%d", &palpite);

      if (palpite == numeroSecreto) {
        printf("Parabéns! Você acertou!\n");
      } else {
        printf("Você errou. O número era %d.\n", numeroSecreto);
      }
      break;
    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Escolha uma opção no menu.\n");
      printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
      printf("3. O jogo termina quando você escolhe 'Sair'.\n");
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

    return 0;
}