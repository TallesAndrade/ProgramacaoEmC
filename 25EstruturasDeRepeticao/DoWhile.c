#include <stdio.h>

int main()
{

    int numero;

    do
    {
        printf("Digite um número par pra sair do codigo\n ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("Número digitado %d saindo do programa\n",numero);
        }else{
            printf("Número digitado %d repetindo o programa\n",numero);
        }

    } while (numero % 2 != 0);

    return 0;
}