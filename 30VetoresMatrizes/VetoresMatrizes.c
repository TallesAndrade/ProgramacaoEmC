#include<stdio.h>
#include <stdlib.h>


int main(){

    int numeros[4] = {10,20,30,40};

    for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++)
    {
        printf("%d\n" , numeros[i]);
    }

    

    
   return 0; 
}