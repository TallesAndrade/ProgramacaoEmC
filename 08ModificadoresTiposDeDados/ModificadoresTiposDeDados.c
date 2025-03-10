#include<stdio.h>

int main(){
    //Modificador unsigned
    int numeroSinal = 3000000000; //Este valor excede o limite de um int nomal
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal %d\n",numeroSinal);
    printf("Número com sinal %u\n",numeroSemSinal);

    printf("--------------------------------\n");

    //Modificador long
    int numeroNormal = 2147483647;//Valor maximo int
    long int numeroGrande = 2147483647;

    printf("Número regular (int) %d\n ",numeroNormal);
    printf("Número grande (long int) %ld\n ",numeroGrande);

    numeroGrande = 2147483648;

    printf("Número grande atualizado (long int) %ld\n ",numeroGrande);

    printf("--------------------------------\n");
    //bytes de cada tipo de dado
    printf("Tamanho de int: %u bytes\n", sizeof(int));
    printf("Tamanho de long int: %u bytes\n", sizeof(long int));
    printf("Tamanho de long long int: %u bytes\n", sizeof(long long int));
    printf("Tamanho de double: %u bytes\n", sizeof(double));
    printf("Tamanho de long double: %u bytes\n", sizeof(long double));

    printf("--------------------------------\n");


    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.14159265358979323846;
 
    printf("Número preciso (double): %.15u\n", numeroPreciso);
    printf("Número muito preciso (long double): %.21Lu\n", numeroMuitoPreciso);

    return 0;
}