#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "modules/jogo.c"
#include "modules/testacampeonato.c"
void main(){
  /* Localiza o codigo para imprimir caracteres especiais. */
  setlocale(LC_ALL, "");
  srand(time(NULL));
  int op=1,uselles;
  guerreiro *players;
  while (op!=0) {
    system("@cls||clear");
    printf("     _______..______      ___       ______  _______         ___      .______       _______ .__   __.      ___      \n");
    printf("    /       ||   _  \\    /   \\     /      ||   ____|       /   \\     |   _  \\     |   ____||  \\ |  |     /   \\     \n");
    printf("   |   (----`|  |_)  |  /  ^  \\   |  ,----'|  |__         /  ^  \\    |  |_)  |    |  |__   |   \\|  |    /  ^  \\    \n");
    printf("    \\   \\    |   ___/  /  /_\\  \\  |  |     |   __|       /  /_\\  \\   |      /     |   __|  |  . `  |   /  /_\\  \\    \n");
    printf(".----)   |   |  |     /  _____  \\ |  `----.|  |____     /  _____  \\  |  |\\  \\----.|  |____ |  |\\   |  /  _____  \\  \n");
    printf("|_______/    | _|    /__/     \\__\\ \\______||_______|   /__/     \\__\\ | _| `._____||_______||__| \\__| /__/     \\__\\ \n");
    printf("\n\n\n                                                    Luta - 1");
    printf("\n                                                    Torneio - 2");
    printf("\n                                                    Sair - 0");
    printf("\nSua escolha: ");
    scanf("%d", &op);
    switch (op) {
      case 0:
        break;
      case 1:
        system("@cls||clear");
        printf("\nCriando guerreiros");
        players=malloc(sizeof(guerreiro)*2);
        players[0].idJogador=1;
        players[1].idJogador=2;
        criaGuerreiro(&players[0]);
        criaGuerreiro(&players[1]);
        printf("\n\nGuerreiro 1:\n\n");
        printf("Pontos de vida: %d\nForca: %d\nDefesa: %d\nCarisma: %d", players[0].pontosVida,players[0].ataque,players[0].defesa,players[0].carisma);
        printf("\n\nGuerreiro 2\n\n");
        printf("Pontos de vida: %d\nForca: %d\nDefesa: %d\nCarisma: %d", players[1].pontosVida,players[1].ataque,players[1].defesa,players[1].carisma);
        fflush(stdin);
        printf("\n\nprecione algo para iniciar a luta...");
        getchar();
        luta(&players[0],&players[1]);
        free(players);
        break;
      case 2:
        rodaCampeonato(players, 16);
        break;
      default:
        //system("@cls||clear");
        printf("\nPadawan, o caminho que voce esta seguindo leva ao lado negro da forca, de meia volta e corrija seu erro");
        printf("\nAperte algo para voltar...");
        fflush(stdin);
        getchar();

        break;
    }
  }
}
