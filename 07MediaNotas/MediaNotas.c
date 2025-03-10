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

    printf("Nota1: %.2lf, Nota2: %.2lf, Nota3: %.2lf\n", nota1, nota2, nota3);

    printf("A média das 3 notas é: %.2lf\n" , media);




    return 0;
}