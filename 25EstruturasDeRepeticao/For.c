#include <stdio.h>

int main() {
    int valorBase;
    
    printf("Digite o valor base que você quer a tabuada: ");
    scanf("%d", &valorBase);

    for (int i = 0; i <= 10; i++) {
        printf("%d * %d = %d\n", i, valorBase, i * valorBase);
    }

    return 0;
}
