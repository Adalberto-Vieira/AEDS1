#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jogo.c"
#include "controladorJogo.h"

int validaInput(char *s, int maxValue,int maxLenght){
  int a, retorno=1;
  if(strlen(s)!=maxLenght){
    retorno=0;
  }else{
    for(int i=0; i<strlen(s);i++){
      if((int)s[i]<'0'||(int)s[i]>'9'){
        retorno=0;
        break;
      }
      a = s[i] - '0';
      if(a>maxValue){
        retorno=0;
        break;
      }
    }
  }
  return retorno;
}
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
          int tentativas=0;
          char *senha;
          int *feedback;
          fflush(stdin);
          senha=malloc(sizeof(char)*4);
          feedback=malloc(sizeof(int)*2);
          char palpite[5];
          palpite[4]='\0';
          geraSenha(senha,4,0,3);
          fflush(stdin);
          printf("\n\nprecione algo para iniciar...");
          getchar();
          system("@cls||clear");
          while (feedback[1]!=3) {
            feedback[0]=0;
            feedback[1]=0;
            tentativas++;
            printf("Tentativa %d", tentativas);
            printf("\n\nDigite seu palpite(E-Sair): ");
            fflush(stdin);
            scanf("%s", palpite);
            if(palpite[0]=='E'){
              printf("A senha e: \"%s\"\n", senha);
              fflush(stdin);
              printf("\n\nprecione algo para iniciar...");
              getchar();
              break;
            }
            while(validaInput(palpite, 4, 3)==0){
              printf("Seu palpite esta em um padrao errado: ");
              fflush(stdin);
              scanf("%s", palpite);
              if(palpite[0]=='E'){
                break;
              }
            }
            if(palpite[0]=='E'){
              printf("A senha e: \"%s\"\n", senha);
              fflush(stdin);
              printf("\n\nprecione algo para iniciar...");
              getchar();
              break;
            }
            avaliaPalpite(palpite,feedback,senha,0);
            printf("\nValores corretos posicao errada %d", feedback[0]);
            printf("\nValores corretos posicao correta %d", feedback[1]);
            fflush(stdin);
            printf("\n\nprecione algo para continuar...");
            getchar();
            printf("--------------------------------------\n");
          }

          free(senha);
          free(palpite);
          free(feedback);
          free(senha);
        }
        break;
        case 2:
        {
          int tentativas=0;
          char *senha;
          int *feedback;
          fflush(stdin);
          senha=malloc(sizeof(char)*5);
          feedback=malloc(sizeof(int)*2);
          char palpite[5];
          palpite[5]='\0';
          geraSenha(senha,5,1,4);
          fflush(stdin);
          printf("\n\nprecione algo para iniciar...");
          getchar();
          system("@cls||clear");
          while (feedback[1]!=4) {
            feedback[0]=0;
            feedback[1]=0;
            tentativas++;
            printf("Tentativa %d", tentativas);
            printf("\n\nDigite seu palpite: ");
            fflush(stdin);
            scanf("%s", palpite);
            if(palpite[0]=='E'){
              printf("A senha e: \"%s\"\n", senha);
              fflush(stdin);
              printf("\n\nprecione algo para iniciar...");
              getchar();
              break;
            }
            while(validaInput(palpite, 5, 4)==0){
              printf("Seu palpite esta em um padrao errado: ");
              fflush(stdin);
              scanf("%s", palpite);
              if(palpite[0]=='E'){
                break;
              }
            }
            if(palpite[0]=='E'){
              printf("A senha e: \"%s\"\n", senha);
              fflush(stdin);
              printf("\n\nprecione algo para iniciar...");
              getchar();
              break;
            }
            avaliaPalpite(palpite,feedback,senha,1);
            printf("\nValores corretos posicao errada %d", feedback[0]);
            printf("\nValores corretos posicao correta %d", feedback[1]);
            fflush(stdin);
            printf("\n\nprecione algo para continuar...");
            getchar();
            printf("--------------------------------------\n");
          }

          free(senha);
          free(palpite);
          free(feedback);
        }
        break;
        case 3:
        {
          int tentativas=0;
          char *senha;
          int *feedback;
          fflush(stdin);
          senha=malloc(sizeof(char)*5);
          feedback=malloc(sizeof(int)*2);
          char palpite[5];
          palpite[5]='\0';
          geraSenha(senha,9,1,4);
          fflush(stdin);
          printf("\n\nprecione algo para iniciar...");
          getchar();
          system("@cls||clear");
          while (feedback[1]!=4) {
            feedback[0]=0;
            feedback[1]=0;
            tentativas++;
            printf("Tentativa %d", tentativas);
            printf("\n\nDigite seu palpite: ");
            fflush(stdin);
            scanf("%s", palpite);
            if(palpite[0]=='E'){
              printf("A senha e: \"%s\"\n", senha);
              fflush(stdin);
              printf("\n\nprecione algo para iniciar...");
              getchar();
              break;
            }
            while(validaInput(palpite, 9, 4)==0){
              printf("Seu palpite esta em um padrao errado: ");
              fflush(stdin);
              scanf("%s", palpite);
              if(palpite[0]=='E'){
                break;
              }
            }
            if(palpite[0]=='E'){
              printf("A senha e: \"%s\"\n", senha);
              fflush(stdin);
              printf("\n\nprecione algo para iniciar...");
              getchar();
              break;
            }
            avaliaPalpite(palpite,feedback,senha,1);
            printf("\nValores corretos posicao errada %d", feedback[0]);
            printf("\nValores corretos posicao correta %d", feedback[1]);
            fflush(stdin);
            printf("\n\nprecione algo para continuar...");
            getchar();
            printf("--------------------------------------\n");
          }

          free(senha);
          free(palpite);
          free(feedback);
        }
        break;
        case 4:
        {
          int tentativas=0;
          char *senha;
          int *feedback;
          fflush(stdin);
          senha=malloc(sizeof(char)*5);
          feedback=malloc(sizeof(int)*2);
          char palpite[5];
          palpite[5]='\0';
          geraSenha(senha,9,1,4);
          printf("A senha e: \"%s\"\n", senha);
          fflush(stdin);
          printf("\n\nprecione algo para iniciar...");
          getchar();
          system("@cls||clear");
          while (feedback[1]!=4) {
            feedback[0]=0;
            feedback[1]=0;
            tentativas++;
            printf("Tentativa %d", tentativas);
            printf("\n\nDigite seu palpite(E- sair): ");
            fflush(stdin);
            scanf("%s", palpite);
            if(palpite[0]=='E'){
              printf("A senha e: \"%s\"\n", senha);
              fflush(stdin);
              printf("\n\nprecione algo para iniciar...");
              getchar();
              break;
            }
            while(validaInput(palpite, 9, 4)==0){
              printf("Seu palpite esta em um padrao errado: ");
              fflush(stdin);
              scanf("%s", palpite);
              if(palpite[0]=='E'){
                break;
              }
            }
            if(palpite[0]=='E'){
              printf("A senha e: \"%s\"\n", senha);
              fflush(stdin);
              printf("\n\nprecione algo para iniciar...");
              getchar();
              break;
            }
            avaliaPalpite(palpite,feedback,senha,1);
            printf("\nValores corretos posicao errada %d", feedback[0]);
            printf("\nValores corretos posicao correta %d", feedback[1]);
            fflush(stdin);
            printf("\n\nprecione algo para continuar...");
            getchar();
            printf("--------------------------------------\n");
          }

          free(senha);
          free(palpite);
          free(feedback);
        }
        break;
        case 5:
        {
          int tentativas=0;
          int tamanhoSenha, maxVal, repete;
          char *senha;
          int *feedback;
          fflush(stdin);
          printf("\nDigite o tamanho da senha: ");
          scanf("%d", &tamanhoSenha);
          printf("\nDigite o valor maximo");
          scanf("%d", &maxVal);
          printf("\nPodem ocorrer repeticoes(0-nao|1-sim): ");
          scanf("%d", &repete);
          senha=malloc(sizeof(char)*tamanhoSenha+1);
          feedback=malloc(sizeof(int)*2);
          char palpite[tamanhoSenha+1];
          palpite[tamanhoSenha+1]='\0';
          geraSenha(senha,maxVal,repete,tamanhoSenha);
          fflush(stdin);
          printf("\n\nprecione algo para iniciar...");
          getchar();
          system("@cls||clear");
          while (feedback[1]!=tamanhoSenha) {
            feedback[0]=0;
            feedback[1]=0;
            tentativas++;
            printf("Tentativa %d", tentativas);
            printf("\n\nDigite seu palpite(E para sair): ");
            fflush(stdin);
            scanf("%s", palpite);
            if(palpite[0]=='E'){
              printf("A senha e: \"%s\"\n", senha);
              fflush(stdin);
              printf("\n\nprecione algo para continuar...");
              getchar();
              break;
            }
            while(validaInput(palpite, maxVal, tamanhoSenha)==0){
              printf("Seu palpite esta em um padrao errado: ");
              fflush(stdin);
              scanf("%s", palpite);
              if(palpite[0]=='E'){
                break;
              }
            }
            if(palpite[0]=='E'){
              printf("A senha e: \"%s\"\n", senha);
              fflush(stdin);
              printf("\n\nprecione algo para iniciar...");
              getchar();
              break;
            }
            avaliaPalpite(palpite,feedback,senha,repete);
            printf("\nValores corretos posicao errada %d", feedback[0]);
            printf("\nValores corretos posicao correta %d", feedback[1]);
            fflush(stdin);
            printf("\n\nprecione algo para continuar...");
            getchar();
            printf("--------------------------------------\n");
          }

          free(senha);
          free(palpite);
          free(feedback);
        }
        break;
        case 6:
        break;
        default:
        printf("Opcao nao reconhecida");
        break;
      }
      break;
      case 2:{
        system("@cls||clear");
        printf("\nPlayer 1 escolha a senha: ");
        int tentativas=0;
        int tamanhoSenha, maxVal, repete;
        char *senha;
        int *feedback;
        fflush(stdin);
        printf("\nDigite o tamanho da senha: ");
        scanf("%d", &tamanhoSenha);
        printf("\nDigite o valor maximo");
        scanf("%d", &maxVal);
        printf("\nPodem ocorrer repeticoes(0-nao|1-sim): ");
        scanf("%d", &repete);
        senha=malloc(sizeof(char)*tamanhoSenha+1);
        feedback=malloc(sizeof(int)*2);
        char palpite[tamanhoSenha+1];
        palpite[tamanhoSenha+1]='\0';
        fflush(stdin);
        printf("\n\nDigite a senha: ");
        scanf("%s", senha);
        fflush(stdin);
        printf("\n\nprecione algo para iniciar...");
        getchar();
        system("@cls||clear");
        printf("\n\nPlayer 2 tente advinhar");
        while (feedback[1]!=tamanhoSenha) {
          feedback[0]=0;
          feedback[1]=0;
          tentativas++;
          printf("Tentativa %d", tentativas);
          printf("\n\nDigite seu palpite(E para sair): ");
          fflush(stdin);
          scanf("%s", palpite);
          if(palpite[0]=='E'){
            printf("A senha e: \"%s\"\n", senha);
            fflush(stdin);
            printf("\n\nprecione algo para continuar...");
            getchar();
            break;
          }
          while(validaInput(palpite, maxVal, tamanhoSenha)==0){
            printf("Seu palpite esta em um padrao errado: ");
            fflush(stdin);
            scanf("%s", palpite);
            if(palpite[0]=='E'){
              break;
            }
          }
          if(palpite[0]=='E'){
            printf("A senha e: \"%s\"\n", senha);
            fflush(stdin);
            printf("\n\nprecione algo para iniciar...");
            getchar();
            break;
          }
          avaliaPalpite(palpite,feedback,senha,repete);
          printf("\nValores corretos posicao errada %d", feedback[0]);
          printf("\nValores corretos posicao correta %d", feedback[1]);
          fflush(stdin);
          printf("\n\nprecione algo para continuar...");
          getchar();
          printf("--------------------------------------\n");
        }

        free(senha);
        free(palpite);
        free(feedback);
      }
      break;
      case 3:{
        system("@cls||clear");
        printf("\nA maquina ira fazer tentativas aleatorias até acertar a senha\n");
        printf("\nPrecione algo para comecar...\n");
        fflush(stdin);
        getchar();
        int tentativas=0;
        int tamanhoSenha, maxVal, repete;
        char *senha;
        int *feedback;
        fflush(stdin);
        printf("\nDigite o tamanho da senha: ");
        scanf("%d", &tamanhoSenha);
        printf("\nDigite o valor maximo: ");
        scanf("%d", &maxVal);
        senha=malloc(sizeof(char)*tamanhoSenha+1);
        feedback=malloc(sizeof(int)*2);
        char palpite[tamanhoSenha+1];
        palpite[tamanhoSenha+1]='\0';
        fflush(stdin);
        printf("\n\nDigite a senha: ");
        scanf("%s", senha);
        fflush(stdin);
        printf("\n\nprecione algo para iniciar...");
        getchar();
        system("@cls||clear");
        while (feedback[1]!=tamanhoSenha) {
          feedback[0]=0;
          feedback[1]=0;
          tentativas++;
          printf("Tentativa %d", tentativas);
          palpitaRamdom(palpite, maxVal, tamanhoSenha);
          printf("\nSenha utilizada pela maquina: %s\n", palpite);
          avaliaPalpite(palpite,feedback,senha,repete);
          printf("\nValores corretos posicao errada %d", feedback[0]);
          printf("\nValores corretos posicao correta %d", feedback[1]);
          fflush(stdin);
          printf("\n\nprecione algo para continuar...");
          getchar();
          printf("--------------------------------------\n");
        }

        free(senha);
        free(palpite);
        free(feedback);
      }
      break;
    }
  }
}

  void startWithParameters(int argc, char *argv[ ] ){
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
      int opc=argv[1];
      switch (op) {
        case 1:
        switch (opc) {
          case 1:
          {
            int tentativas=argv[2];
            char *senha;
            int *feedback;
            fflush(stdin);
            senha=malloc(sizeof(char)*4);
            feedback=malloc(sizeof(int)*2);
            char palpite[5];
            palpite[4]='\0';
            geraSenha(senha,4,0,3);
            fflush(stdin);
            printf("\n\nprecione algo para iniciar...");
            getchar();
            system("@cls||clear");
            while (feedback[1]!=3&&tentativas>0) {
              feedback[0]=0;
              feedback[1]=0;
              tentativas--;
              printf("%d Tentativas restantes", tentativas);
              printf("\n\nDigite seu palpite(E-Sair): ");
              fflush(stdin);
              scanf("%s", palpite);
              if(palpite[0]=='E'){
                printf("A senha e: \"%s\"\n", senha);
                fflush(stdin);
                printf("\n\nprecione algo para iniciar...");
                getchar();
                break;
              }
              while(validaInput(palpite, 4, 3)==0){
                printf("Seu palpite esta em um padrao errado: ");
                fflush(stdin);
                scanf("%s", palpite);
                if(palpite[0]=='E'){
                  break;
                }
              }
              if(palpite[0]=='E'){
                printf("A senha e: \"%s\"\n", senha);
                fflush(stdin);
                printf("\n\nprecione algo para iniciar...");
                getchar();
                break;
              }
              avaliaPalpite(palpite,feedback,senha,0);
              printf("\nValores corretos posicao errada %d", feedback[0]);
              printf("\nValores corretos posicao correta %d", feedback[1]);
              fflush(stdin);
              printf("\n\nprecione algo para continuar...");
              getchar();
              printf("--------------------------------------\n");
            }

            free(senha);
            free(palpite);
            free(feedback);
            free(senha);
          }
          break;
          case 2:
          {
            int tentativas=argv[2];
            char *senha;
            int *feedback;
            fflush(stdin);
            senha=malloc(sizeof(char)*5);
            feedback=malloc(sizeof(int)*2);
            char palpite[5];
            palpite[5]='\0';
            geraSenha(senha,5,1,4);
            fflush(stdin);
            printf("\n\nprecione algo para iniciar...");
            getchar();
            system("@cls||clear");
            while (feedback[1]!=4&&tentativas>0) {
              feedback[0]=0;
              feedback[1]=0;
              tentativas--;
              printf("Tentativa %d", tentativas);
              printf("\n\nDigite seu palpite: ");
              fflush(stdin);
              scanf("%s", palpite);
              if(palpite[0]=='E'){
                printf("A senha e: \"%s\"\n", senha);
                fflush(stdin);
                printf("\n\nprecione algo para iniciar...");
                getchar();
                break;
              }
              while(validaInput(palpite, 5, 4)==0){
                printf("Seu palpite esta em um padrao errado: ");
                fflush(stdin);
                scanf("%s", palpite);
                if(palpite[0]=='E'){
                  break;
                }
              }
              if(palpite[0]=='E'){
                printf("A senha e: \"%s\"\n", senha);
                fflush(stdin);
                printf("\n\nprecione algo para iniciar...");
                getchar();
                break;
              }
              avaliaPalpite(palpite,feedback,senha,1);
              printf("\nValores corretos posicao errada %d", feedback[0]);
              printf("\nValores corretos posicao correta %d", feedback[1]);
              fflush(stdin);
              printf("\n\nprecione algo para continuar...");
              getchar();
              printf("--------------------------------------\n");
            }

            free(senha);
            free(palpite);
            free(feedback);
          }
          break;
          case 3:
          {
            int tentativas=argv[2];
            char *senha;
            int *feedback;
            fflush(stdin);
            senha=malloc(sizeof(char)*5);
            feedback=malloc(sizeof(int)*2);
            char palpite[5];
            palpite[5]='\0';
            geraSenha(senha,9,1,4);
            fflush(stdin);
            printf("\n\nprecione algo para iniciar...");
            getchar();
            system("@cls||clear");
            while (feedback[1]!=4 && tentativas>0) {
              feedback[0]=0;
              feedback[1]=0;
              tentativas++;
              printf("Tentativa restantes: %d", tentativas);
              printf("\n\nDigite seu palpite: ");
              fflush(stdin);
              scanf("%s", palpite);
              if(palpite[0]=='E'){
                printf("A senha e: \"%s\"\n", senha);
                fflush(stdin);
                printf("\n\nprecione algo para iniciar...");
                getchar();
                break;
              }
              while(validaInput(palpite, 9, 4)==0){
                printf("Seu palpite esta em um padrao errado: ");
                fflush(stdin);
                scanf("%s", palpite);
                if(palpite[0]=='E'){
                  break;
                }
              }
              if(palpite[0]=='E'){
                printf("A senha e: \"%s\"\n", senha);
                fflush(stdin);
                printf("\n\nprecione algo para iniciar...");
                getchar();
                break;
              }
              avaliaPalpite(palpite,feedback,senha,1);
              printf("\nValores corretos posicao errada %d", feedback[0]);
              printf("\nValores corretos posicao correta %d", feedback[1]);
              fflush(stdin);
              printf("\n\nprecione algo para continuar...");
              getchar();
              printf("--------------------------------------\n");
            }

            free(senha);
            free(palpite);
            free(feedback);
          }
          break;
          case 4:
          {
            int tentativas=argv[2];
            char *senha;
            int *feedback;
            fflush(stdin);
            senha=malloc(sizeof(char)*5);
            feedback=malloc(sizeof(int)*2);
            char palpite[5];
            palpite[5]='\0';
            geraSenha(senha,9,1,4);
            printf("A senha e: \"%s\"\n", senha);
            fflush(stdin);
            printf("\n\nprecione algo para iniciar...");
            getchar();
            system("@cls||clear");
            while (feedback[1]!=4 && tentativas>0) {
              feedback[0]=0;
              feedback[1]=0;
              tentativas--;
              printf("Tentativas restantes %d", tentativas);
              printf("\n\nDigite seu palpite(E- sair): ");
              fflush(stdin);
              scanf("%s", palpite);
              if(palpite[0]=='E'){
                printf("A senha e: \"%s\"\n", senha);
                fflush(stdin);
                printf("\n\nprecione algo para iniciar...");
                getchar();
                break;
              }
              while(validaInput(palpite, 9, 4)==0){
                printf("Seu palpite esta em um padrao errado: ");
                fflush(stdin);
                scanf("%s", palpite);
                if(palpite[0]=='E'){
                  break;
                }
              }
              if(palpite[0]=='E'){
                printf("A senha e: \"%s\"\n", senha);
                fflush(stdin);
                printf("\n\nprecione algo para iniciar...");
                getchar();
                break;
              }
              avaliaPalpite(palpite,feedback,senha,1);
              printf("\nValores corretos posicao errada %d", feedback[0]);
              printf("\nValores corretos posicao correta %d", feedback[1]);
              fflush(stdin);
              printf("\n\nprecione algo para continuar...");
              getchar();
              printf("--------------------------------------\n");
            }

            free(senha);
            free(palpite);
            free(feedback);
          }
          break;
          case 5:
          {
            int tentativas=argv[2];
            int tamanhoSenha, maxVal, repete;
            char *senha;
            int *feedback;
            fflush(stdin);
            printf("\nDigite o tamanho da senha: ");
            scanf("%d", &tamanhoSenha);
            printf("\nDigite o valor maximo");
            scanf("%d", &maxVal);
            printf("\nPodem ocorrer repeticoes(0-nao|1-sim): ");
            scanf("%d", &repete);
            senha=malloc(sizeof(char)*tamanhoSenha+1);
            feedback=malloc(sizeof(int)*2);
            char palpite[tamanhoSenha+1];
            palpite[tamanhoSenha+1]='\0';
            geraSenha(senha,maxVal,repete,tamanhoSenha);
            fflush(stdin);
            printf("\n\nprecione algo para iniciar...");
            getchar();
            system("@cls||clear");
            while (feedback[1]!=tamanhoSenha&&tentativas>0) {
              feedback[0]=0;
              feedback[1]=0;
              tentativas--;
              printf("Tentativa %d", tentativas);
              printf("\n\nDigite seu palpite(E para sair): ");
              fflush(stdin);
              scanf("%s", palpite);
              if(palpite[0]=='E'){
                printf("A senha e: \"%s\"\n", senha);
                fflush(stdin);
                printf("\n\nprecione algo para continuar...");
                getchar();
                break;
              }
              while(validaInput(palpite, maxVal, tamanhoSenha)==0){
                printf("Seu palpite esta em um padrao errado: ");
                fflush(stdin);
                scanf("%s", palpite);
                if(palpite[0]=='E'){
                  break;
                }
              }
              if(palpite[0]=='E'){
                printf("A senha e: \"%s\"\n", senha);
                fflush(stdin);
                printf("\n\nprecione algo para iniciar...");
                getchar();
                break;
              }
              avaliaPalpite(palpite,feedback,senha,repete);
              printf("\nValores corretos posicao errada %d", feedback[0]);
              printf("\nValores corretos posicao correta %d", feedback[1]);
              fflush(stdin);
              printf("\n\nprecione algo para continuar...");
              getchar();
              printf("--------------------------------------\n");
            }

            free(senha);
            free(palpite);
            free(feedback);
          }
          break;
          case 6:
          break;
          default:
          printf("Opcao nao reconhecida");
          break;
        }
        break;
        case 2:{
          system("@cls||clear");
          printf("\nPlayer 1 escolha a senha: ");
          int tentativas=0;
          int tamanhoSenha, maxVal, repete;
          char *senha;
          int *feedback;
          fflush(stdin);
          printf("\nDigite o tamanho da senha: ");
          scanf("%d", &tamanhoSenha);
          printf("\nDigite o valor maximo");
          scanf("%d", &maxVal);
          printf("\nPodem ocorrer repeticoes(0-nao|1-sim): ");
          scanf("%d", &repete);
          senha=malloc(sizeof(char)*tamanhoSenha+1);
          feedback=malloc(sizeof(int)*2);
          char palpite[tamanhoSenha+1];
          palpite[tamanhoSenha+1]='\0';
          fflush(stdin);
          printf("\n\nDigite a senha: ");
          scanf("%s", senha);
          fflush(stdin);
          printf("\n\nprecione algo para iniciar...");
          getchar();
          system("@cls||clear");
          printf("\n\nPlayer 2 tente advinhar");
          while (feedback[1]!=tamanhoSenha) {
            feedback[0]=0;
            feedback[1]=0;
            tentativas++;
            printf("Tentativa %d", tentativas);
            printf("\n\nDigite seu palpite(E para sair): ");
            fflush(stdin);
            scanf("%s", palpite);
            if(palpite[0]=='E'){
              printf("A senha e: \"%s\"\n", senha);
              fflush(stdin);
              printf("\n\nprecione algo para continuar...");
              getchar();
              break;
            }
            while(validaInput(palpite, maxVal, tamanhoSenha)==0){
              printf("Seu palpite esta em um padrao errado: ");
              fflush(stdin);
              scanf("%s", palpite);
              if(palpite[0]=='E'){
                break;
              }
            }
            if(palpite[0]=='E'){
              printf("A senha e: \"%s\"\n", senha);
              fflush(stdin);
              printf("\n\nprecione algo para iniciar...");
              getchar();
              break;
            }
            avaliaPalpite(palpite,feedback,senha,repete);
            printf("\nValores corretos posicao errada %d", feedback[0]);
            printf("\nValores corretos posicao correta %d", feedback[1]);
            fflush(stdin);
            printf("\n\nprecione algo para continuar...");
            getchar();
            printf("--------------------------------------\n");
          }

          free(senha);
          free(palpite);
          free(feedback);
        }
        break;
        case 3:{
          system("@cls||clear");
          printf("\nA maquina ira fazer tentativas aleatorias até acertar a senha\n");
          printf("\nPrecione algo para comecar...\n");
          fflush(stdin);
          getchar();
          int tentativas=0;
          int tamanhoSenha, maxVal, repete;
          char *senha;
          int *feedback;
          fflush(stdin);
          printf("\nDigite o tamanho da senha: ");
          scanf("%d", &tamanhoSenha);
          printf("\nDigite o valor maximo: ");
          scanf("%d", &maxVal);
          senha=malloc(sizeof(char)*tamanhoSenha+1);
          feedback=malloc(sizeof(int)*2);
          char palpite[tamanhoSenha+1];
          palpite[tamanhoSenha+1]='\0';
          fflush(stdin);
          printf("\n\nDigite a senha: ");
          scanf("%s", senha);
          fflush(stdin);
          printf("\n\nprecione algo para iniciar...");
          getchar();
          system("@cls||clear");
          while (feedback[1]!=tamanhoSenha) {
            feedback[0]=0;
            feedback[1]=0;
            tentativas++;
            printf("Tentativa %d", tentativas);
            palpitaRamdom(palpite, maxVal, tamanhoSenha);
            printf("\nSenha utilizada pela maquina: %s\n", palpite);
            avaliaPalpite(palpite,feedback,senha,repete);
            printf("\nValores corretos posicao errada %d", feedback[0]);
            printf("\nValores corretos posicao correta %d", feedback[1]);
            fflush(stdin);
            printf("\n\nprecione algo para continuar...");
            getchar();
            printf("--------------------------------------\n");
          }

          free(senha);
          free(palpite);
          free(feedback);
        }
        break;
      }
    }
  }
