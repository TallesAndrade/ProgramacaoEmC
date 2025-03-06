#include <stdio.h>

int main(){
    int idade = 20;
    float altura = 1.79;
    char letra = 'T';
    char nome[10] = "Talles";

    printf("A idade do %s é: %d anos\n", nome, idade);
    printf("Tenho %.2f de altura e a primeira letra do meu nome é %c\n", altura, letra);

    printf("Digite seu nome e idade: ");
    scanf("%s %d" , nome , &idade);
    printf("Digite sua altura e a primeira letra do seu nome:");
    scanf("%f %c", &altura , &letra);
    printf("A idade do %s é: %d anos\n", nome, idade);
    printf("Tenho %.2f de altura e a primeira letra do meu nome é %c\n", altura, letra);


    return 0;
}