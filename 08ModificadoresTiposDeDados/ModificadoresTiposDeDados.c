#include<stdio.h>

int main(){
    int numeroSinal = 3000000000; //Este valor excede o limite de um int nomal
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal %d\n",numeroSinal);
    printf("Número com sinal %u\n",numeroSemSinal);

    printf("--------------------------------\n");

    int numeroNormal = 2147483647;//Valor maximo int
    long int numeroGrande = 2147483647;

    printf("Número regular (int) %d\n ",numeroNormal);
    printf("Número grande (long int) %ld\n ",numeroGrande);

    numeroGrande = 2147483648;

    printf("Número grande atualizado (long int) %ld\n ",numeroGrande);



    return 0;
}