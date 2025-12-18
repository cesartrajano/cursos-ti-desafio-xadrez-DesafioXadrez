#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
 //movimento  torre 5 casas para a direita //
  for (int i=0; i < 5; i++)
  {

    //direçao do movimento//

    printf("direita \n");
  
  }

  //movimento  bispo 5 casas diagonal //
  int movimento_bispo  = 0 ; //variavel de movimento

  while (movimento_bispo <=5) 
  { //direçao do movimento//
        printf("Cima\n");
        printf("Direita\n");

        movimento_bispo++;// incremento//

  }
 
  // movimento rainha 8 casas esquerda //
  int movimento_rainha=0;  //variavel de movimento//

  do
  {//direçao do movimento//
    printf("esquerda\n");
    movimento_rainha++;//incremento//
    
  } while (movimento_rainha<8);
  




  return 0;





}





    
    
