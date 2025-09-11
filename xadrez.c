#include <stdio.h>

// Constantes para número de movimentos
const int MOV_BISPO = 5;
const int MOV_TORRE = 5;
const int MOV_RAINHA = 8;
const int MOV_CAVALO_Baixo = 2;
const int MOV_CAVALO_Esquerda = 1;

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

    //Movimentção do Vacalo: Duas para baixo e Uma para esquerda
    printf("\nMovimentção do Cavalo:\n");
    int e = 0;
    for (int c = 0; c < MOV_CAVALO_Baixo; c++){
        printf("Baixo\n");
        while (e < MOV_CAVALO_Esquerda && c == 1){
            printf("Esquerda\n");
            e++;
        } 
    }
}
   

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

  