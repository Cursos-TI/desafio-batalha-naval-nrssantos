#include <stdio.h>

#define TAMANHO 10

// Função para exibir o tabuleiro
void exibir_tabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Nível Novato - Posicionamento de dois navios
    // Navio horizontal de tamanho 3 na linha 1
    for (int j = 1; j <= 3; j++) {
        tabuleiro[1][j] = 3;
        printf("Navio H: (%d, %d)\n", 1, j);
    }

    // Navio vertical de tamanho 3 na coluna 6
    for (int i = 2; i <= 4; i++) {
        tabuleiro[i][6] = 3;
        printf("Navio V: (%d, %d)\n", i, 6);
    }

    // Exibir o tabuleiro com os navios posicionados
    printf("\nTabuleiro:\n");
    exibir_tabuleiro(tabuleiro);

    return 0;
}
