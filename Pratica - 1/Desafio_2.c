#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /* Localiza o codigo para imprimir caracteres especiais. */
    setlocale(LC_ALL, "");
    int op=1;
    float diametroBase,altura, largura, comprimento;
    while(op!=0){
        //menu de caracteres ASCII
        printf("-----------------------------\n");
        printf("|                           |\n");
        printf("| 1 - volume paralelepipedo |\n");
        printf("|                           |\n");
        printf("-----------------------------\n");
        printf("|                           |\n");
        printf("| 2 - volume cilindro.      |\n");
        printf("|                           |\n");
        printf("-----------------------------\n");
        printf("|                           |\n");
        printf("| 0 - sair do programa.     |\n");
        printf("|                           |\n");
        printf("-----------------------------\n");
        printf("Opcao desejada: ");
        scanf("%d",&op);
        //Ciclo de repeticao do menu
        switch(op){
            case 1:
                //imprime mensagem
                printf("\nDigite a altura em cm: ");
                //le altura
                scanf("%f",&altura);
                //imprime mensagem
                printf("\nDigite a largura em cm: ");
                //le a largura
                scanf("%f",&largura);
                //imprime mensagem
                printf("\nDigite o comprimento em cm: ");
                //le comprimento
                scanf("%f", &comprimento);
                //imprime o valor
                printf("\nO volume do solido e %.2f cm cubicos\n",(altura*largura*comprimento));
                //leitura de um caracter para continuar a execucaoo do progrma
                system("PAUSE");
                //limpeza do termina windowns e linux
                system("cls");
            break;
            case 2:
                //imprime mensagem
                printf("\nDigite a altura em cm: ");
                //le o valor
                scanf("%f", &altura);
                //imprime mensagem
                printf("\nDigite o diametro da base em cm: ");
                //le diametro
                scanf("%f",&diametroBase);
                //imprime mensagem
                printf("\nO volume do solido e %.2f cm cubicos\n",(altura*diametroBase));
                //leitura de um caracter para continuar a execucao do progrma
                system("PAUSE");
                //limpeza do termina windowns e linux
                system("cls");
            break;
            case 0:
                //mensagem de tchau
                printf("Ate logo");
            break;
            //caso o valor seleciodo pelo user esteja em formato errado
            default:
                //imprime valor
                printf("Valor nao reconhecido como um comando valido\n");
                //leitura de um caracter para continuar a execucao do progrma
                system("PAUSE");
                //limpeza do termina windowns e linux
                system("cls");
            break;
        }
    }
}
