#include "modules/controladorJogo.h"
#include "modules/jogo.c"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void main(int argc, char *argv[ ]){
  srand(time(NULL));
  fflush(stdin);
  char *senha2=malloc(sizeof(char)*5);
  geraSenha(senha2, 2);
  printf("%s\n", senha2);
  fflush(stdin);
  char *senha3=malloc(sizeof(char)*5);
  geraSenha(senha3, 3);
  fflush(stdin);
  printf("%s\n", senha3);
  /*
  if(argc>1){
    startWithParameters(argc, argv);
  }else{
    start();
  }
  */
}
