#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// ALUNO: João Victor Azevedo de Souza.


// Funções para Movimentos das peças.

void torre(int casas){
    /*Recebendo como parametro casas que seria
      a quantidade de vezes que vamos mexer a peça 
      e criar as condições.*/

      if (casas > 0){
        printf("             direita...           \n");
        torre(casas - 1);
      }
}

void bispo(int casas){

    /*Recebendo como parametro casas que seria
      a quantidade de vezes que vamos mexer a peça 
      e criar as condições.*/

      for (int horizontal = 1; horizontal <= casas; horizontal++){
        for (int vertical = 0; vertical < 1; vertical++){
            printf("             direita...           \n");
            printf("             cima...             \n");
        }
      }
}

void rainha(int casas){
    /*Recebendo como parametro casas que seria
      a quantidade de vezes que vamos mexer a peça 
      e criar as condições.*/

      if (casas > 0){
        rainha(casas - 1);
        printf("             esquerda...           \n");
      }




}

void cavalo(){
    /*Recebendo como parametro casas que seria
      a quantidade de vezes que vamos mexer a peça 
      e criar as condições.*/

      for (int vertical = 0; vertical < 3; vertical++){
        for (int horizontal = 0; horizontal < 3; horizontal++){
            if (vertical <2 && horizontal == 0){
                printf("             cima...             \n");
            }else if (vertical == 2 && horizontal == 1){
                printf("             direita...           \n");
            }
            
        }
        
      }






}

int main() {
    const int move_torre = 5, move_bispo = 5, move_queen = 8;
    int passo_bispo = 0, passo_queen = 0;


    // Implementação de Movimentação da Torre
    // Sistema: Utilização do For para mover a Torre.
   // Movimento da peça a partir de uma função.

    printf("----------------------------------\n");
    printf("         MOVENDO A TORRE!         \n");
    printf("\n");

   torre(move_torre);
   printf("\n");
    
    // Implementação de Movimentação do Bispo
    // Sistema: Utilização do While para mover o Bispo.
    /* Função fazendo o loop aninhado. */

    printf("----------------------------------\n");
    printf("          MOVENDO A BISPO!        \n");
    printf("\n");

    bispo(move_bispo);
    
    // Implementação de Movimentação da Rainha
    // Sistema: Utilização do Do...While para mover a Rainha.
    // Movimento da peça a partir de uma função.

    printf("----------------------------------\n");
    printf("         MOVENDO A RAINHA!        \n");
    printf("\n");

    rainha(move_queen);


    // Implementação de Movimentação da Cavalo
    // Sistema: Utilização For e while para mover o cavalo.
    // Movimento da peça a partir de uma função./

    printf("----------------------------------\n");
    printf("         MOVENDO O CAVALO!        \n");
    printf("\n");

   cavalo();
        
    printf("----------------------------------\n");

    return 0;
}

