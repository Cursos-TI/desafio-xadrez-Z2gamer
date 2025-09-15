#include <stdio.h>

// Constantes para número de movimentos
const int MOV_BISPO = 5;
const int MOV_TORRE = 5;
const int MOV_RAINHA = 8;
const int MOV_CAVALO_Baixo = 2;
const int MOV_CAVALO_Esquerda = 1;

//Recursividadde do Bispo
void Mov_BispoLoop(int b){
    for (int b = 0; b < MOV_BISPO; b++) {
        printf("Cima\n");
        int B=0;
        while (B<MOV_BISPO){
            printf("Direita\n");
            B++;
            break;
        }
    }
}

//Recursividade da Torre
void Mov_TorreLoop(int t){
    if(t < MOV_TORRE){
        printf("Direita\n");
        Mov_TorreLoop(t+1);
    }
}

//Recursividade da Rainha
void Mov_Rainhaloop(int r){
    if (r < MOV_RAINHA){
        printf("Esquerda\n");
        Mov_Rainhaloop(r+1);
    }
    
}

int main() {
    // Movimentação do Bispo: Diagonal superior direita (Cima + Direita)
    printf("\nMovimentação do Bispo:\n");
    char Bispo;
    Mov_BispoLoop(Bispo);

    // Movimentação da Torre: Direita
    printf("\nMovimentação da Torre:\n");
    char Cavalo;
    Mov_TorreLoop(Cavalo);
    
    // Movimentação da Rainha: Esquerda
    printf("\nMovimentação da Rainha:\n");
    char Rainha;
    Mov_Rainhaloop(Rainha);
    
    //Movimentção do Cavalo: Duas para cima e Uma para direita
    printf("\nMovimentção do Cavalo:\n");
    int e = 0;
    for (int c = 0; c < MOV_CAVALO_Baixo; c++){
        printf("Cima\n");
        while (e < MOV_CAVALO_Esquerda && c == 1){
            printf("Direita\n");
            e++;
        } 
    }
    return 0;
}