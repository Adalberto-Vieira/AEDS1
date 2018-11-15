#ifndef JOGO_H
#define JOGO_H

/*
* Função reponsavel por gerar a senha utilizada pelo computador
*@param senha - Representa a string onde será armazenada a senha gerada
*@param numeroMaximoValor - representa o maior valor de um algorismo(1-10)
*@param repete - Indica se a existe repitição dos valores da senha
*/
void geraSenha(char *senha, int numeroMaximoValor, int repete);

/*
* Função reponsavel por avaliar o palpite realizado pelo usuario
*@param palpite - Representa a variavel reponsavel por armazenar a senha digitada pelo usuario
*@param feedback - Representa o retorno sobre o palpite anterior do usuario(default o,o)
*@param senha - Representa a string onde será armazenada a senha gerada
*@param repete - indica se valores se repetem
*/
void avaliaPalpite(char *palpite, int *feedback, char *senha, int repete);

/*
* Função reponsavel por gerar um palpite por parte do computador
*@param palpite - Representa a variavel reponsavel por armazenar a senha digitada pela maquina
*@param feedback - Representa o retorno sobre o palpite anterior da maquina(default o,o)
*@param palpiteAnterior - representa o palpite anterior da maquina
*@param numeroMaximoValor - representa o maior valor de um algorismo(1-10)
*@param repete - Indica se a existe repitição dos valores da senha
*/
void palpita(char *palpite, int *feedback, char *palpiteAnterior, int numeroMaximoValor, int repete);

#endif
