#include "jogo.h"
#include <stdlib.h>
#include <stdio.h>
# include <time.h>

int rolaDados(){
    int val;
    time_t t;
    srand((unsigned) time(&t));
    val=(rand()%6)+(rand()%6)+(rand()%6);
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

void criaGuerreiro(guerreiro *highlander){
  time_t t;
  srand((unsigned) time(&t));
  highlander->ataque=rolaDados();
  highlander->defesa=rolaDados();
  highlander->carisma=rolaDados();
  highlander->pontosVida=rolaDados();
}

/*
Para manter a competitividade, a ordem de ataque
dos guerreiros e definida da seguinte forma:
Rolar 3d6 + bonus de carisma. Valor obtido é somado
ao das rolagens anteriores, representando sua iniciativa.
Quando o valor da iniciativa atinge 100, o guerreiro ataca(estilo JRPG).
Em caso de empate rolase novamente até desempatar.
*/
int iniciativa(guerreiro *p1,guerreiro *p2,int *iniciativaP1,int *iniciativaP2){
  while ((*iniciativaP1<100||*iniciativaP2<100) && *iniciativaP1!=*iniciativaP2) {
    *iniciativaP1=bonusCarisma(p1->carisma)+rolaDados();
    *iniciativaP2=bonusCarisma(p2->carisma)+rolaDados();
  }
  if(&iniciativaP1 > &iniciativaP2){
    return 0;
  }
  return 1;
}

void ataca(guerreiro *p1,guerreiro *p2){
  p2->pontosVida-=(bonusCarisma(p1->carisma)+rolaDados())-(bonusCarisma(p2->carisma)+rolaDados());
}
