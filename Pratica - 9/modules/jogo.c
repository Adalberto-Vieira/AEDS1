#include "jogo.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int rolaDados(){
    int val=0;
    while (val<3) {
      val=0;
      val=(rand()%7)+(rand()%7)+(rand()%7);
    }
    return val;
}

int bonusCarisma(int characterCraismaStatus){
  if (characterCraismaStatus==7||characterCraismaStatus==6) {
    return -1;
  }else if (characterCraismaStatus==4||characterCraismaStatus==5) {
    return -2;
  }else if (characterCraismaStatus<=3){
    return -3;
  }else if (characterCraismaStatus>=18){
    return 3;
  }else if (characterCraismaStatus==16||characterCraismaStatus==17){
    return 2;
  }else if (characterCraismaStatus==14||characterCraismaStatus==15){
    return 1;
  }
  return 0;
}

void criaGuerreiro(guerreiro *heighlander){

  heighlander->ataque=rolaDados();
  heighlander->defesa=rolaDados();
  heighlander->carisma=rolaDados();
  heighlander->pontosVida=rolaDados();
}

/*
Para manter a competitividade, a ordem de ataque
dos guerreiros e definida da seguinte forma:
Rolar 3d6 + bonus de carisma. Valor obtido é somado
ao das rolagens anteriores, representando sua iniciativa.
Quando o valor da iniciativa atinge 100, o guerreiro ataca(estilo JRPG).
Em caso de empate rolase novamente até desempatar.
*/
int ordemAtaque(guerreiro *p1,guerreiro *p2){
  while ((p1->iniciativa<100||p2->iniciativa<100) && p1->iniciativa==p2->iniciativa) {
    p1->iniciativa=bonusCarisma(p1->carisma)+rolaDados();
    p2->iniciativa=bonusCarisma(p2->carisma)+rolaDados();
  }
  if(p1->iniciativa > p2->iniciativa){
    p1->iniciativa=0;
    return 0;
  }
  p2->iniciativa=0;
  return 1;
}

void ataca(guerreiro *p1,guerreiro *p2){
  int dano=(bonusCarisma(p1->carisma)+rolaDados())-(bonusCarisma(p2->carisma)+rolaDados());
  if (dano<0){
    dano=0;
  }
  p2->pontosVida-=dano;
  printf("\nDano Causado: %d\nVida atual: %d", dano, p2->pontosVida);
}
