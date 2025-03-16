#include<stdio.h>

int main(){
    int numero1, numero2;

    numero1 = 10;
    numero2 = 5;

    if (numero1 > numero2){
        printf("Número 1 é maior que número 2\n");

    }
    
    printf("Fora do if\n"); 

    printf("---------------------\n");

    int idade = 20;
    if (idade >= 18){
        printf("Você é maior de idade\n");
        printf("Dentro do if\n");
    }
    printf("Fora do if\n");

    printf("---------------------\n");

    float temperatura = 32.7;

    if (temperatura > 30){
        printf("Está fazendo calor");
    }

    printf("---------------------\n");

    int nota = 75;

    if (nota >= 60) {
    printf("Você passou!\n");
    }

    printf("---------------------\n");


    int numero = 4;

    if (numero % 2 == 0) {
    printf("O número é par\n");
    }

    printf("---------------------\n");


    int estoque = 3;

    if (estoque < 5) {
    printf("Estoque baixo\n");
    } 
    return 0;
}