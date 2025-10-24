#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int i; // variável de controle

    // --- Movimento da Torre ---
    // Move-se em linha reta horizontalmente (5 casas para a direita)

    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");

     // movimento bispo
     printf("movimento do Bispo:\n");
     i=1;
      while (i<=5)       {
         printf("casa %d: Cima, direita\n", i);
        i++;
      }
        printf("\n");
        
      
      // Movimento Rainha
      printf("Movimento da Rainha: \n");
      i=1;
      do {
         printf("casa %d: Esquerda\n", i);
         i++;

        } while (i<=8);


    return 0;
}
