#include<stdio.h>

int main(){
    int tabuleiro[10][10] = {0};

    int linhaNavioV = 4;
    int colunaVavioV  = 3;

    if (condition)
    {
        /* code */
    }
    
    for (int i = 0; i <3 ; i++)
    {
        for (int j = 0; i < 3; i++)
        {
            tabuleiro[linhaNavioV + i][colunaVavioV] = 3;
        }
        
    }
    

    for (int i = 0; i < 10; i++)
    {
        
        for (int j = 0; j < 10; j++)
        {
            printf("%d" , tabuleiro[i][j]);
        }
        printf("\n");
        
    }
    


}