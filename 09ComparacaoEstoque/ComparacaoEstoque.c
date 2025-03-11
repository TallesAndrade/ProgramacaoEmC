#include <stdio.h>

int main() {
    // Dados do Produto 1
    unsigned long long quantidade1 = 3000000000ULL;  
    long long preco1 = 100000LL;
    unsigned long long valorTotal1 = quantidade1 * preco1;

    // Dados do Produto 2
    unsigned long long quantidade2 = 4000000000ULL;  
    long long preco2 = 50000LL;
    unsigned long long valorTotal2 = quantidade2 * preco2;

    printf("=== PRODUTO 1 ===\n");
    printf("Quantidade: %llu\n", quantidade1);
    printf("Preço (unidade): %lld\n", preco1);
    printf("Valor Total: %llu\n\n", valorTotal1);

    printf("=== PRODUTO 2 ===\n");
    printf("Quantidade: %llu\n", quantidade2);
    printf("Preço (unidade): %lld\n", preco2);
    printf("Valor Total: %llu\n\n", valorTotal2);

    printf("Produto 1 tem maior quantidade que Produto 2? %d\n", quantidade1 > quantidade2);
    printf("Produto 1 tem menor valor total que Produto 2? %d\n", valorTotal1 < valorTotal2);
    printf("Produto 1 e Produto 2 têm o mesmo preço? %d\n", preco1 == preco2);

    return 0;
}