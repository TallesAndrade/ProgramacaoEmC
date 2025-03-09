#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // A divisão de inteiros resulta em um numero inteiro

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);

    printf("--------------------\n");

    float a2 = 5.5;
    float b2= 2.2;

    float soma2 = a2 + b2;
    float diferenca2 = a2 - b2;
    float produto2 = a2 * b2;
    float quociente2 = a2 / b2; // A divisão agora considera valores de ponto flutuante

    printf("Soma: %.2f\n", soma2);
    printf("Diferença: %.2f\n", diferenca2);
    printf("Produto: %.2f\n", produto2);
    printf("Quociente: %.2f\n", quociente2);

    printf("--------------------\n");
    int a3 = 10;
    float b3 = 3.5;
    float resultado = a3 + b3; // 'a3' é convertido implicitamente para float

    printf("Resultado: %.2f\n", resultado);

    printf("--------------------\n");

    int a4 = 10;
    int b4 = 3;
    float quociente4 = (float) a4 / b4; // 'a' é explicitamente convertido para float
 
    printf("Quociente: %.2f\n", quociente4);

    return 0;
}