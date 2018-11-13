#ifndef JOGO_H
#define JOGO_H

/*
* Função reponsavel por gerar a senha utilizada pelo computador
*@param senha - Representa a string onde será armazenada a senha gerada
*@param tamanho - Representa o tamanho da string
*@param dificuldade - representa o nivel de dificuldade do programa
*/
void geraSenha(char *senha, int dificuldade);
/*
* Função reponsavel por avaliar o palpite realizado pelo usuario
*@param palpite - Representa a variavel reponsavel por armazenar a senha digitada pelo usuario
*@param feedback - Representa o retorno sobre o palpite anterior do usuario(default o,o)
*@param dificuldade - representa o nivel de dificuldade do programa
*/
void avaliaPalpite(char *palpite, char *feedback, int dificuldade);
/*
* Função reponsavel por gerar um palpite por parte do computador
*@param palpite - Representa a variavel reponsavel por armazenar a senha digitada pela maquina
*@param feedback - Representa o retorno sobre o palpite anterior da maquina(default o,o)
*@param palpiteAnterior - representa o palpite anterior da maquina
*@param dificuldade - representa o nivel de dificuldade do programa
*/
void palpita(char *palpite, char *feedback, char *palpiteAnterior, int dificuldade);

#endif
