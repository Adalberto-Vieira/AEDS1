
#include "modules/controladorJogo.c"
#include "modules/jogo.c"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void main(int argc, char *argv[ ]){
  system("@cls||clear");
  printf("                           __                                             __     \n");
  printf(" /'\\_/`\\                  /\\ \\__                           __            /\\ \\    \n");
  printf("/\\      \\     __      ____\\ \\ ,_\\    __   _ __    ___ ___ /\\_\\    ___    \\_\\ \\   \n");
  printf("\\ \\ \\__\\ \\  /'__`\\   /',__\\\\ \\ \\/  /'__`\\/\\`'__\\/' __` __`\\/\\ \\ /' _ `\\  /'_` \\  \n");
  printf(" \\ \\ \\_/\\ \\/\\ \\L\\.\\_/\\__, `\\\\ \\ \\_/\\  __/\\ \\ \\/ /\\ \\/\\ \\/\\ \\ \\ \\/\\ \\/\\ \\/\\ \\L\\ \\ \n");
  printf("  \\ \\_\\\\ \\_\\ \\__/.\\_\\/\\____/ \\ \\__\\ \\____\\\\ \\_\\ \\ \\_\\ \\_\\ \\_\\ \\_\\ \\_\\ \\_\\ \\___,_\\\n");
  printf("   \\/_/ \\/_/\\/__/\\/_/\\/___/   \\/__/\\/____/ \\/_/  \\/_/\\/_/\\/_/\\/_/\\/_/\\/_/\\/__,_ /\n");
  printf("\n\n\n                                Player versus Maquina - 1");
  printf("\n                                Player versus Player  - 2");
  printf("\n                                Maquina versus Player - 3");
  printf("\nSua escolha: ");
  getchar();
  /*
  if(argc>1){
    startWithParameters(argc, argv);
  }else{
    start();
  }
  */
}
