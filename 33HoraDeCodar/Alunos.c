#include <stdio.h>

int main() {
    int index;

    // Matriz de strings com nomes e notas dos alunos
    char *nomesAlunos[3][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}
    };

    // Exibe opções para o usuário
    printf("Digite o número do aluno que deseja ver as notas...\n");
    printf("Para o aluno 0, digite 0\n");
    printf("Para o aluno 1, digite 1\n");
    printf("Para o aluno 2, digite 2\n");

    // Lê a entrada do usuário corretamente
    scanf("%d", &index);

    // Valida o índice informado
    if (index < 0 || index >= 3) {
        printf("Índice inválido! Escolha entre 0 e 2.\n");
        return 1; // Sai do programa com erro
    }

    // Exibe as notas do aluno escolhido
    printf("As notas de %s são: %s, %s.\n", 
           nomesAlunos[index][0], 
           nomesAlunos[index][1], 
           nomesAlunos[index][2]);

    return 0;
}