#include<stdio.h>

int main(){
    int numero1, numero2;
    int resultado;
    resultado = 10;
    printf("Resultado: %d\n", resultado);

    resultado += 10; // resultado = resultado + 10;
    printf("Resultado: %d\n", resultado);

    resultado -= 5; // resultado = resultado - 5;
    printf("Resultado: %d\n", resultado);

    resultado *= 5; // resultado = resultado * 5;
    printf("Resultado: %d\n", resultado);

    resultado /= 5; // resultado = resultado / 5;
    printf("Resultado: %d\n", resultado);

    return 0;
}