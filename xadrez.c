#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

      // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

   const int bispo = 5;
   const int rainha = 8;
   const int torre = 5;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Bispo se movimentando:\n");

    for (int i = 0; i < bispo; i++) {
        printf("Cima...\n");
        printf("Direita\n");
    }
    printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Torre se movimentando:\n");
    
    int i = 0;
     
    while (i < torre) {
    printf("Direita...\n");
    i++;
}
    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    printf("Rainha se movimentando:\n");
    int j = 0;

    do {
    printf("Esquerda...\n");
    j++;
}   while (j < rainha);

printf("\n"); 

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    printf("Cavalo se movimentando:\n");

    const int moverBaixo = 2;
    const int moverEsquerda = 1;

    // Movimento para baixo (for)
    for (int k = 0; k < moverBaixo; k++) {
        printf("Baixo...\n");
    }

    // Movimento para esquerda (while)
    int l = 0;
    while (l < moverEsquerda) {
        printf("Esquerda...\n");
        l++;
    }  
// Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
