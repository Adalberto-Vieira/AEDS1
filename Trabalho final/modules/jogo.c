#include <stdlib.h>
#include <string.h>
#include "jogo.h"


void geraSenha(char *senha, int numeroMaximoValor, int repete,int tamanho){
  //caractere gerado
  char ch;
  //Se repitir caractere
  if(repete==1){
    //inicializa cada uma das posições da string
    for (int i = 0; i <tamanho; i++) {
      //Atribui um número a ch
      ch=(char)(48+rand()%(numeroMaximoValor+1));
      //Atribui o número a String
      senha[i]=ch;
    }
  }else{
    for (int i = 0; i < tamanho; i++) {
      //Atribui um número a ch
      ch=(char)(48+rand()%(numeroMaximoValor+1));
      //Garante que o numero não se repita na string
      while (memchr(senha, ch, tamanho)!=NULL) {
        //Atribui um número a ch
        ch=(char)(48+rand()%(numeroMaximoValor+1));
      }
      //Atribui o número a String
      senha[i]=ch;
    }
  }
  senha[tamanho]='\0';
}

void avaliaPalpite(char *palpite, int *feedback, char *senha, int repete){
  //tamanho da senha
  int lenght=strlen(senha);
  //Se as duas strings forem iguais
  if(strcoll(palpite, senha)==0){
    //Retorna o número de caracteres corretos
    feedback[1]=lenght;
  }else
  //se não repetir valores
  if(repete==0){
    //percorre a string
    for (int i = 0; i < lenght; i++) {
      //Retorna a primeira posição onde o caracter ocorre na string ou Null
      char *ret =memchr(senha, palpite[i], lenght);
      if(ret!=NULL){
        //se estiver na posição correta
        if(senha[i]==palpite[i]){
          //valor correto posicao correta
          feedback[1]++;
        }else{
          //valor coreto posicao errada
          feedback[0]++;
        }
      }
    }
  }
  //se existirem valores repitidos
  else{
    //marca as letras já avaliadas
    char *avaliadas=malloc(sizeof(char)*lenght);
    for (int i = 0; i < lenght; i++) {
      //Retorna a primeira posição onde o caracter ocorre na string ou Null
      char *ret =memchr(senha, palpite[i], lenght);
      if(ret!=NULL){
        //se estiver na posição correta
        if(senha[i]==palpite[i]){
          //valor correto posicao correta
          feedback[1]++;
        }else{
          //testa se o valor já foi avaliado
          if(memchr(avaliadas, palpite[i], lenght)==NULL){
            //conta o número de elementos
            for (int j = 0; j < strlen(ret); j++) {
              //avalia se são os mesmo valores
              if(ret[j]==palpite[i]){
                //valor coreto posicao errada
                feedback[0]++;
              }
            }
          }
        }
      }
      //marca a letra como avaliada
      avaliadas[i]=palpite[i];
    }
  }
}


void palpitaRamdom(char *palpite, int numeroMaximoValor,int tamanho){
  //percorre as possições
  for (int i = 0; i < tamanho; i++) {
    //Atribui um número a ch
    palpite[i]=(char)(48+rand()%(numeroMaximoValor+1));
  }
}
