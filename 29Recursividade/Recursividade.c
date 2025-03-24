#include<stdio.h>

void recursiveLoop(int n){

    if (n >= 0)
    {
        printf("%d\n" , n);
        recursiveLoop(n - 1);
    }
    
   
}

int main(){
    recursiveLoop(10);

    return 0;
}