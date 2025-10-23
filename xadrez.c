#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// ALUNO: João Victor Azevedo de Souza.

int main() {
    const int move_torre = 5, move_bispo = 5, move_queen = 8;
    int passo_bispo = 0, passo_queen = 0;


    // Implementação de Movimentação da Torre
    // Sistema: Utilização do For para mover a Torre.
    /* For fazendo com que C seja acrescentado +1
       a cada repetição até chegar no valor final 
       da mivimenta ção da torre (move_torre).*/
       
    printf("----------------------------------\n");
    printf("         MOVENDO A TORRE!         \n");
    for (int c = 0; c < move_torre; c++){ 
        printf("             direita...           \n");
    }
    
    // Implementação de Movimentação do Bispo
    // Sistema: Utilização do While para mover o Bispo.
    /* While fazendo com que passo_bispo seja acrescentado +1
       a cada repetição enquanto o prorprio for menor que o 
       move_bispo.*/

    printf("----------------------------------\n");
    printf("          MOVENDO A BISPO!        \n");
    while (passo_bispo < move_bispo)
    {
        printf("             direita...           \n");
        printf("              cima...             \n");
        passo_bispo += 1; 
    }
    
    // Implementação de Movimentação da Rainha
    // Sistema: Utilização do Do...While para mover a Rainha.
    /* Do...While fazendo com que PASSO_QUEEN seja acrescentado +1
       na primeira repetição e só irá movimentar novamente enquanto
       passo_queen for menor que move_queen.*/

    printf("----------------------------------\n");
    printf("         MOVENDO A RAINHA!        \n");
    do
    {
        printf("             esquerda...           \n");
        passo_queen += 1;
    } while (passo_queen < move_queen);

    printf("----------------------------------\n");

    return 0;
}
