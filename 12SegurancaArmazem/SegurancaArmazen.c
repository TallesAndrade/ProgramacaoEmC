#include<stdio.h>

int main(){
    float temperatura, humidade;
    int estoque;

    printf("Digite o valor da temperatura\n");
    scanf("%f",&temperatura);
    printf("Digite o valor da humidade\n");
    scanf("%f",&humidade);
    printf("Digite o valor do estoque\n");
    scanf("%d",&estoque);

    if (temperatura > 30)
    {
        printf("Temperatura fora dos parâmetros\n");
    }else{
        printf("Temperatura dentro dos parâmetros\n");
    }

    if (humidade > 50)
    {
        printf("Temperatura fora dos parâmetros\n");
    }else{
        printf("Temperatura dentro dos parâmetros\n");
    }

    if (estoque < 100)
    {
        printf("Estoque fora dos parâmetros\n");
    }else{
        printf("Estoque dentro dos parâmetros\n ");
    }
    

}