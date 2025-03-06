#include<stdio.h>

int main(){
    char nome[20];
    float altura;
    int idade;
    int matricula;


    printf("Digite seu nome:");
    scanf("%s",nome);

    printf("Digite sua altura: ");
    scanf("%f",&altura);

    printf("Digite sua idade:");
    scanf("%d", &idade);

    printf("Digite sua matricula:");
    scanf("%d", &matricula);
    
    printf("O aluno %s tem %d anos de idade %.2f de altura e sua matricula é %d\n", nome , idade ,altura, matricula);

    return 0;
}