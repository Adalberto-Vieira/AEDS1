#ifndef JOGO_H
#define JOGO_H

struct guerreiro{
    int idJogador;
    int ataque;
    int defesa;
    int carisma;
    int pontosVida;
};

typedef struct guerreiro guerreiro;

int rolaDados();
int bonusCarisma();
void criaGuerreiro(guerreiro highlander);
#endif
