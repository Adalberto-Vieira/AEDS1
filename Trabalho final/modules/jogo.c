#include <stdlib.h>
#include <string.h>
#include "jogo.h"


void geraSenha(char *senha, int numeroMaximoValor, int repete){
  //caractere gerado
  char ch;
  //tamanho da string
  int lenght=strlen(senha);
  //Se repitir caractere
  if(repete==1){
    //inicializa cada uma das posições da string
    for (int i = 0; i <lenght; i++) {
      //Atribui um número a ch
      ch=(char)(48+rand()%(numeroMaximoValor+1));
      //Atribui o número a String
      senha[i]=ch;
    }
    //caractere de end line
    senha[lenght]='\n';
  }else{
    for (int i = 0; i < lenght; i++) {
      //Atribui um número a ch
      ch=(char)(48+rand()%5);
      //Garante que o numero não se repita na string
      while (memchr(senha, ch, lenght)!=NULL) {
        //Atribui um número a ch
        ch=(char)(48+rand()%(numeroMaximoValor+1));
      }
      //Atribui o número a String
      senha[i]=ch;
    }
    //caractere de end line
    senha[lenght]='\n';
  }
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


void palpita(char *palpite, int *feedback, char *palpiteAnterior, int *feedbackAnterior, int numeroMaximoValor, int repete){
  int lenght=strlen(senha);
  if(repete==1){
    if(feedback[1]==0&&feedback[0]==0){
      if(feedbackAnterior[0]==0&&feedbackAnterior[1]==0){
        for (int i = 0; i < lenght; i++) {
          palpitde[i]=(char)(48+rand()%(numeroMaximoValor+1));
        }
      }else{

      }
    }else{

    }
  }else{
    if(feedback[1]==0&&feedback[0]==0){
      if(feedbackAnterior[0]==0&&feedbackAnterior[1]==0){
        for (int i = 0; i <lenght; i++) {
          //Atribui um número a ch
          char ch=(char)(48+rand()%5);
          //Garante que o numero não se repita na string
          while (memchr(palpite, ch, lenght)!=NULL) {
            //Atribui um número a ch
            ch=(char)(48+rand()%(numeroMaximoValor+1));
          }
          //Atribui o número a String
          palpite[i]=ch;
        }
      }
    }else{
      if(feedbackAnterior[0]<feedback[])
    }

  }
}

void palpitaRamdom(char *palpite){
  if(repete==1){
    if(feedback[1]==0&&feedback[0]==0){
      if(feedbackAnterior[0]==0&&feedbackAnterior[1]==0){
        for (int i = 0; i < lenght; i++) {
          palpitde[i]=(char)(48+rand()%(numeroMaximoValor+1));
        }
      }else{

      }
    }
}
