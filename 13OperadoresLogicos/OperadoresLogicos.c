#include <stdio.h>

int main()
{
  int a = -5, b = 20;

  if (a > 0 && b > 0)
  {
    printf("Os dois numeros são positivos\n");
  }
  else
  {
    printf("Pelo menos um dos dois numeros é negativo\n");
  }

  printf("----------------------------\n");

  if (a > 0 || b > 0)
  {
    printf("Um dos numero é positivo\n");
  }
  else
  {
    printf("Os dois numeros são negativos\n");
  }

  printf("----------------------------\n");

  int c = -20;

  if (!(c > 0))
  {
    printf("A variavel c negativa\n");
  }
  else
  {
    printf("A variavel c é positiva\n");
  }

  printf("----------------------------\n");

  int d = 5;
  int e = -10;
  int f = 0;

  if (a > 0 && b < 0 || c == 0)
  {
    printf("A condição é verdadeira\n");
  }
  else
  {
    printf("A condição é falsa\n");
  }

  printf("----------------------------\n");

  int idade = 20;
  float altura = 1.75;

  if (idade >= 18 && idade <= 30 && altura > 1.70) {
    printf("Você está na faixa etária e tem a altura adequada\n");
  } else {
    printf("Você não atende aos critérios\n");

  return 0;
}
