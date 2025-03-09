#include<stdio.h>
#include <stdio.h>

int main() {
    int numero1 = 1;

    // Pós-incremento: primeiro usa o valor, depois incrementa
    printf("Antes do pós-incremento: %d\n", numero1);
    printf("Usando pós-incremento: %d\n", numero1++); // Usa e depois incrementa
    printf("Depois do pós-incremento: %d\n\n", numero1); // Agora já está incrementado

    // Pré-incremento: primeiro incrementa, depois usa o valor
    printf("Antes do pré-incremento: %d\n", numero1);
    printf("Usando pré-incremento: %d\n", ++numero1); // Incrementa e depois usa
    printf("Depois do pré-incremento: %d\n\n", numero1);

    // Pós-decremento: primeiro usa o valor, depois decrementa
    printf("Antes do pós-decremento: %d\n", numero1);
    printf("Usando pós-decremento: %d\n", numero1--); // Usa e depois decrementa
    printf("Depois do pós-decremento: %d\n\n", numero1); // Agora já está decrementado

    // Pré-decremento: primeiro decrementa, depois usa o valor
    printf("Antes do pré-decremento: %d\n", numero1);
    printf("Usando pré-decremento: %d\n", --numero1); // Decrementa e depois usa
    printf("Depois do pré-decremento: %d\n", numero1);

    return 0;
}