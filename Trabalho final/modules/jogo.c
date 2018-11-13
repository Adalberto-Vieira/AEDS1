#include <stdlib.h>
#include <string.h>
#include "jogo.h"


void geraSenha(char *senha, int dificuldade){
  //caractere gerado
  char ch;
  switch (dificuldade) {
    // dificuldade facil
    case 1:
    printf("foi");
      //inicializa cada uma das posições da string
      for (int i = 0; i < 3; i++) {
        //Atribui um número a ch
        ch=(char)(48+rand()%5);
        //Garante que o numero não se repita na string
        while (memchr(senha, ch, strlen(senha))!=NULL) {
          ch=(char)(48+rand()%5);
        }
        //Atribui o número a String
        senha[i]=ch;
      }
      //caractere de end line
      senha[3]='\n';
    break;

    //dificuldade media
    case 2:
      //inicializa cada uma das posições da string
      for (int i = 0; i < 4; i++) {
        //Atribui um número a ch
        ch=(char)(48+rand()%6);
        //Atribui o número a String
        senha[i]=ch;
      }
      //caractere de end line
      senha[4]='\n';
    break;

    //dificuldade dificil
    case 3:
      //inicializa cada uma das posições da string
      for (int i = 0; i < 4; i++) {
        //Atribui um número a ch
        ch=(char)(48+rand()%10);
        //Atribui o número a String
        senha[i]=ch;
      }
      //caractere de end line
      senha[4]='\n';
    break;
  }
}

void avaliaPalpite(char *palpite, char *feedback, int dificuldade){

}

void palpita(char *palpite, char *feedback, char *palpiteAnterior, int dificuldade);
