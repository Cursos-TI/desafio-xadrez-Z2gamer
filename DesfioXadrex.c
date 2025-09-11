#include <stdio.h>

// Constantes para número de movimentos
const int MOV_BISPO = 5;
const int MOV_TORRE = 5;
const int MOV_RAINHA = 8;

int main() {
    // Movimentação do Bispo: Diagonal superior direita (Cima + Direita)
    printf("Movimentação do Bispo:\n");
    for (int b = 0; b < MOV_BISPO; b++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimentação da Torre: Direita
    printf("\nMovimentação da Torre:\n");
    int t = 0;
    while (t < MOV_TORRE) {
        printf("Direita\n");
        t++;
    }

    // Movimentação da Rainha: Esquerda
    printf("\nMovimentação da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < MOV_RAINHA);

    return 0;
}