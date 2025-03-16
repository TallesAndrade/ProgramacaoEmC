#include <stdio.h>

int main()
{
    int idade = 20;
    int resultado;

    resultado = idade >= 18 ? 1 : 0;

    if (resultado == 1)
    {
        printf("Você é maior de idade\n");
    }
    else
    {
        printf("Você é menor de idade\n");
    }

    printf("----------------------------\n");

    int temperatura = 28;
    int resultado2;

    resultado2 = temperatura > 25 ? 1 : 0;

    if (resultado2 == 1)
    {
        printf("Está fazendo calor\n");
    }
    else
    {
        printf("Está fazendo frio\n");
    }

    printf("----------------------------\n");

    int numA = 30, numB = 20;
    int maior;

    maior = numA > numB ? numA : numB;

    printf("O numero maior é %d\n",maior);

    return 0;
}