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
        printf("| 1 - volume paralelepípedo |\n");
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
        printf("Opção desejada: ");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("\nDigite a altura em cm: ");
                scanf("%f",&altura);
                printf("\nDigite a largura em cm: ");
                scanf("%f",&largura);
                printf("\nDigite o comprimento em cm: ");
                scanf("%f", &comprimento);
                printf("\nO volume do solido é %.2f cm cubicos\n",(altura*largura*comprimento));
                //leitura de um caracter para continuar a execução do progrma
                system("PAUSE");
                //limpeza do termina windowns e linux
                system("cls");
            break;
            case 2:
                printf("\nDigite a altura em cm: ");
                scanf("%f", &altura);
                printf("\nDigite o diametro da base em cm: ");
                scanf("%f",&diametroBase);
                printf("\nO volume do solido é %.2f cm cubicos\n",(altura*diametroBase));
                //leitura de um caracter para continuar a execução do progrma
                system("PAUSE");
                //limpeza do termina windowns e linux
                system("cls");
            break;
            case 0:
                printf("Até logo");
            break;
            default:
                printf("Valor não reconhecido como um comando valido\n");
                //leitura de um caracter para continuar a execução do progrma
                system("PAUSE");
                //limpeza do termina windowns e linux
                system("cls");
            break;
        }
    }
}
