#include <stdio.h>

/* =====================================================
   FUNÇÕES RECURSIVAS
   ===================================================== */

/* Movimento recursivo da Torre (Direita) */
void moverTorre(int casas) {
    if (casas == 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

/* Movimento recursivo da Rainha (Esquerda) */
void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/* Movimento do Bispo
   - Recursividade controla o movimento vertical
   - Loop interno controla o movimento horizontal */
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return;

    for (int i = 0; i < horizontal; i++) {
        printf("Direita\n");
    }

    printf("Cima\n");

    moverBispo(vertical - 1, horizontal);
}

/* =====================================================
   FUNÇÃO PRINCIPAL
   ===================================================== */

int main() {

    /* Constantes de movimentação */
    const int casasTorre = 5;
    const int casasRainha = 8;
    const int casasBispoVertical = 5;
    const int casasBispoHorizontal = 1;

    /* ---------------- TORRE ---------------- */
    printf("Torre se movimentando:\n");
    moverTorre(casasTorre);
    printf("\n");

    /* ---------------- RAINHA ---------------- */
    printf("Rainha se movimentando:\n");
    moverRainha(casasRainha);
    printf("\n");

    /* ---------------- BISPO ---------------- */
    printf("Bispo se movimentando:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);
    printf("\n");

    /* ---------------- CAVALO ---------------- */
    printf("Cavalo se movimentando:\n");

    /* Movimento em L:
       2 casas para cima e 1 para a direita */
    for (int vertical = 1; vertical <= 2; vertical++) {

        /* Exemplo de continue:
           ignora qualquer valor inválido (didático) */
        if (vertical < 1) {
            continue;
        }

        printf("Cima\n");

        for (int horizontal = 1; horizontal <= 2; horizontal++) {

            if (horizontal == 1) {
                printf("Direita\n");
                break; // Sai após o movimento correto
            }
        }
    }

    return 0;
}
