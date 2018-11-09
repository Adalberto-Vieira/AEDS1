#include "testacampeonato.h"
#include "jogo.h"
#include <stdio.h>
#include <stdlib.h>

void rodaCampeonato(guerreiro *heighlander, int numberOfFighters){
  int i=0;
  heighlander=malloc(sizeof(guerreiro)*numberOfFighters);
  for(int playerID=1; playerID<=numberOfFighters; playerID++){
    heighlander[playerID-1].idJogador=playerID;
    criaGuerreiro(&heighlander[playerID-1]);
    printf("\n\nGuerreiro %d\n\n",heighlander[playerID-1].idJogador);
    printf("Pontos de vida: %d\nForca: %d\nDefesa: %d\nCarisma: %d", heighlander[playerID-1].pontosVida,heighlander[playerID-1].ataque,heighlander[playerID-1].defesa,heighlander[playerID-1].carisma);
  }
  fflush(stdin);
  printf("\n\nprecione algo para iniciar a luta...");
  getchar();
  int k=numberOfFighters;
  while(numberOfFighters!=1){
    i=0;
    for (int j = i+1; j < k; j+=2) {
      while(heighlander[i].idJogador==0){
        i++;
        if(i==j){
          j++;
        }
      }
      while(heighlander[j].idJogador==0){
        j++;
      }
      if(luta(&heighlander[i],&heighlander[j])==1){
        heighlander[j].idJogador=0;
        numberOfFighters--;
      }else{
        heighlander[i].idJogador=0;
        numberOfFighters--;
      }
      i+=2;
    }
  }
  for (int w = 0; w < 16; w++) {
    if(heighlander[w].idJogador!=0){
      system("@cls||clear");
      printf("\nGuerreiro %d venceu o torneio",heighlander[w].idJogador);
      fflush(stdin);
      getchar();
    }
  }
}
int luta(guerreiro *p1, guerreiro *p2){
  int round=1,winner;
  while (p1->pontosVida>0 && p2->pontosVida>0) {
    system("@cls||clear");
    printf("\n\nRound %d\n\n", round);
    if(ordemAtaque(p1,p2)==1){
      printf("guerreiro %d ataca guerreiro %d\n", p2->idJogador, p1->idJogador);
      ataca(p2,p1);
      if(p1->pontosVida<=0){
        printf("\nGuerreiro %d venceu",p2->idJogador);
        winner=2;
      }
      printf("\n\nprecione algo...");
      getchar();
    }else{
      printf("guerreiro %d ataca guerreiro %d\n", p1->idJogador, p2->idJogador);
      ataca(p1,p2);
      if(p2->pontosVida<=0){
        printf("\nGuerreiro %d venceu",p1->idJogador);
        winner=1;
      }
      printf("\n\nprecione algo...");
      getchar();
    }
    round++;
  }
  return winner;
}
