#include <stdio.h>

// Função recursiva para o Bispo (diagonal superior direita)
void moverBispo(int passo, int limite) {
    if (passo >= limite) return;
    printf("Diagonal: Cima + Direita\n");
    moverBispo(passo + 1, limite);
}

// Função recursiva para a Torre (direita)
void moverTorre(int passo, int limite) {
    if (passo >= limite) return;
    printf("Direita\n");
    moverTorre(passo + 1, limite);
}

// Função recursiva para a Rainha (esquerda)
void moverRainha(int passo, int limite) {
    if (passo >= limite) return;
    printf("Esquerda\n");
    moverRainha(passo + 1, limite);
}

int main() {
    // Nível Novato
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    printf("=== Nível Novato ===\n");

    printf("Movimento do Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Diagonal: Cima + Direita\n");
    }

    printf("Movimento da Torre:\n");
    for (int i = 0; i < TORRE_MOV; i++) {
        printf("Direita\n");
    }

    printf("Movimento da Rainha:\n");
    for (int i = 0; i < RAINHA_MOV; i++) {
        printf("Esquerda\n");
    }

    // Nível Aventureiro
    printf("\n=== Nível Aventureiro ===\n");
    printf("Movimento do Cavalo em L (2 para baixo + 1 para esquerda):\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        for (int j = 0; j < 1; j++) {
            printf("Esquerda\n");
        }
    }

    // Nível Mestre
    printf("\n=== Nível Mestre ===\n");

    printf("Movimento Recursivo do Bispo:\n");
    moverBispo(0, BISPO_MOV);

    printf("Movimento Recursivo da Torre:\n");
    moverTorre(0, TORRE_MOV);

    printf("Movimento Recursivo da Rainha:\n");
    moverRainha(0, RAINHA_MOV);

    // Cavalo com variáveis múltiplas e condições
    printf("Movimento avançado do Cavalo (1 para cima + 2 para direita):\n");
    int direcao1 = 0, direcao2 = 0;
    while (1) {
        if (direcao1 < 1) {
            printf("Cima\n");
            direcao1++;
            continue; // volta ao início do loop sem verificar o break
        }

        if (direcao2 < 2) {
            printf("Direita\n");
            direcao2++;
        } else {
            break; // encerra o loop quando o movimento em L terminar
        }
    }

    return 0;
}
