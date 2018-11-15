#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jogo.c"
#include "controladorJogo.h"
// int validaInput(char *s, int maxValue,int maxLenght){
//   int a, retorno=1;
//   if(strlen(s)!=maxLenght){
//     retorno=0;
//   }else{
//     for(int i=0; i<strlen(s);i++){
//       if((int)s[i]<'0'||(int)s[i]>'9'){
//         retorno=0;
//         break;
//       }
//       a = s[i] - '0';
//       if(a>maxValue){
//         retorno=0;
//         break;
//       }
//     }
//   }
//   return retorno;
// }
void start(){
  srand(time(NULL));
  int op=1;


  while (op!=0) {
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
    printf("\n                                Sair                  - 0");
    printf("\nSua escolha: ");
    fflush(stdin);
    scanf("%d", &op);
    switch (op) {
      case 1:
        system("@cls||clear");
        printf("\nEscolha a dificuldade: ");
        printf("\n\nFacil - 1");
        printf("\nMedio - 2");
        printf("\nDificil - 3");
        printf("\nTeste - 4");
        printf("\nCustumizado - 5");
        printf("\nVoltar - 6");
        printf("\n\nSua Escolha: ");
        scanf("%d", &op);
        switch (op) {
          case 1:
          {
            char *senha;
            fflush(stdin);
            senha=malloc(sizeof(char)*4);
            senha[4]='\n';
            geraSenha(senha,4,0,3);
              printf("A senha e: \"%s\"\n%d", senha,strlen(senha));
            fflush(stdin);
            printf("\n\nprecione algo para iniciar...");
            getchar();
            free(senha);
          }
          break;
          case 2:
          {
            char *senha;
            fflush(stdin);
            senha=(char *) malloc(sizeof(char)*5);
            geraSenha(senha,9,0,4);
            printf("A senha e: \"%s\"\n%d", senha,strlen(senha));
            fflush(stdin);
            printf("\n\nprecione algo para iniciar...");
            getchar();
            free(senha);
          }
          break;
          case 3:
          {
            char *senha;
            fflush(stdin);
            senha=malloc(sizeof(char)*5);
            geraSenha(senha,9,1,4);
            printf("A senha e: \"%s\"\n", senha);
            fflush(stdin);
            printf("\n\nprecione algo para iniciar...");
            getchar();
            free(senha);
          }
          break;
          case 4:
          {
            char *senha;
            fflush(stdin);
            senha=malloc(sizeof(char)*5);
            char palpite[5];
            palpite[5]='\n';
            geraSenha(senha,9,1,4);
            printf("A senha e: \"%s\"\n", senha);
            fflush(stdin);
            printf("\n\nprecione algo para iniciar...");
            getchar();
            system("@cls||clear");
            printf("Digite seu palpite: ");
            fflush(stdin);
            scanf("%s", palpite);
            while(validaInput(palpite, 9, 5)==0){
              system("@cls||clear");
              printf("Seu palpite esta em um padrao errado: ");
              fflush(stdin);
              scanf("%s", palpite);
            }
            free(senha);
          }
          break;
        }
      break;
    }
  }
}

void startWithParameters(int argc, char *argv[ ] ){
  srand(time(NULL));
}
