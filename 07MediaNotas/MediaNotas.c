#include<stdio.h>

int main(){
    double nota1, nota2, nota3;
    printf("Digite o valor da 1º nota\n");
    scanf("%lf" , &nota1);
    printf("Digite o valor da 2º nota\n");
    scanf("%lf" , &nota2);
    printf("Digite o valor da 3º nota\n");
    scanf("%lf" , &nota3);

    double media = (nota1 + nota2 + nota3) / 3.0;

    printf("A média das 3 notas é: %.1lf\n" , media);




    return 0;
}