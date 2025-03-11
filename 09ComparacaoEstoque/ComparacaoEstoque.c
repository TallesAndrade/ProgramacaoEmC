#include <stdio.h>

int main() {
    // Dados do Produto 1
    unsigned long long estoque1 = 10000;  // Exemplo de estoque
    long long preco1 = 299;              // Preço unitário
    unsigned long long valorTotal1 = estoque1 * preco1;

    // Dados do Produto 2
    unsigned long long estoque2 = 12000;
    long long preco2 = 399;
    unsigned long long valorTotal2 = estoque2 * preco2;

    // Exibe as informações dos produtos
    printf("=== PRODUTO 1 ===\n");
    printf("Estoque: %llu\n", estoque1);
    printf("Preço (unidade): R$ %lld\n", preco1);
    printf("Valor Total: R$ %llu\n\n", valorTotal1);

    printf("=== PRODUTO 2 ===\n");
    printf("Estoque: %llu\n", estoque2);
    printf("Preço (unidade): R$ %lld\n", preco2);
    printf("Valor Total: R$ %llu\n\n", valorTotal2);

    // Comparações (sem estruturas de controle)
    printf("Produto 1 tem maior estoque que Produto 2? %d\n", (estoque1 > estoque2));
    printf("Produto 1 tem menor valor total que Produto 2? %d\n", (valorTotal1 < valorTotal2));
    printf("Produto 1 e Produto 2 têm o mesmo preço? %d\n", (preco1 == preco2));

    return 0;

