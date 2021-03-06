#ifndef JOGO_H
#define JOGO_H

struct guerreiro{
    int ataque;
    int defesa;
    int carisma;
    int idJogador;
    int pontosVida;
    int iniciativa;
};

typedef struct guerreiro guerreiro;

int rolaDados();
int bonusCarisma();
void ataca(guerreiro *p1, guerreiro *p2);
void criaGuerreiro(guerreiro *highlander);
int iniciativa(guerreiro *p1,guerreiro *p2,int *iniciativaP1,int *iniciativaP2);
#endif
