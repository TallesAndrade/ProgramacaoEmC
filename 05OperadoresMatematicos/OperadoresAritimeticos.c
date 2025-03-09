#include<stdio.h>

int main(){
    int numero1, numero2;
    int soma, subtracao, divisao, multiplicacao;

    printf("Digite o primeiro número\n");
    scanf("%d" ,&numero1);
    printf("Digite o segundo número\n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    divisao = numero1 / numero2;
    multiplicacao = numero1 * numero2;

    printf("Resultado das 4 aperações basicas\n");
    printf("Soma %d\n", soma);
    printf("Subtração %d\n", subtracao);
    printf("Divisão %d\n" , divisao);
    printf("Multiplicação %d\n", multiplicacao);

    return 0;

}