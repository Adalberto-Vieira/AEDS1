#include <stdio.h>
#include <locale.h>
#include "pratica4.c"

void main(){
    /* Localiza o codigo para imprimir caracteres especiais. */
    setlocale(LC_ALL, "");
    int op=1, numero,operacao, x, y,z;
    float diametroBase,altura, largura, comprimento;
    float velocidade,raio;
    while(op!=0){
        //menu de caracteres ASCII
        printf("|--------------------|-------------------|\n");
        printf("| 1 - Exercicio 1    | 2 - Exercicio 2   |\n");
        printf("|--------------------|-------------------|\n");
        printf("| 3 - Exercicio 3    | 4 - Exercicio 4   |\n");
        printf("|--------------------|-------------------|\n");
        printf("| 5 - Exercicio 5    | 6 - Exercicio 6   |\n");
        printf("|--------------------|-------------------|\n");
        printf("| 7 - Exercicio 7    | 8 - Exercicio 8   |\n");
        printf("|--------------------|-------------------|\n");
        printf("| 9 - Exercicio 9    | 10 - Exercicio 10 |\n");
        printf("|--------------------|-------------------|\n");
        printf("| 11 - Exercicio 11  | 12 - Exercicio 12 |\n");
        printf("|--------------------|-------------------|\n");
        printf("| 13 - Exercicio 13  | 14 - Exercicio 14 |\n");
        printf("|--------------------|-------------------|\n");
        printf("| 15 - Exercicio 15  | 16 - Exercicio 16 |\n");
        printf("|--------------------|-------------------|\n");
        printf("| 17 - Todas         | 0 - SAIR           |\n");
        printf("|--------------------|-------------------|\n");
        printf("Opção desejada: ");
        scanf("%d",&op);
        switch(op){
            case 1:

                printf("\nDigite a velocidade em Km/h: ");
                scanf("%f",&velocidade);
                printf("\nA velocidade equivale a %f m/s\n",paraMetrosPorSegundo(velocidade));
                system("PAUSE");
                system("cls");
            break;
            case 2:
                printf("\nDigite o raio: ");
                scanf("%f", &raio);
                printf("\nA area : %f\n", areaCirculo(raio));
                system("cls");
            break;
            case 3:
                printf("\nDigite o numero ");
                scanf("%d", &numero);
                printf("\n%d\n",ehPar(numero));
                system("PAUSE");
                system("cls");
            break;
            case 5:
                fflush(stdin);
                printf("\nDigite o sexo: ");
                scanf("%c", &sexo);
                printf("\nDigite a altura: ");
                fflush(stdin);
                scanf("%f", &altura);
                printf("\npeso ideal %f\n",pesoIdeal(altura,sexo));
                system("PAUSE");
                system("cls");
            break;
            case 4:
                printf("\nDigite o numero ");
                scanf("%d", &numero);
                printf("\n%d\n",ehDivisivelPor3ou5(numero));
                system("PAUSE");
                system("cls");
            break;
            case 6:
                printf("\nDigite o numero ");
                scanf("%d", &numero);
                printf("\nResultado %d\n",somaImpares(numero));
                system("PAUSE");
                system("cls");
            break;
            case 7:
                printf("\nDigite o numero ");
                scanf("%d", &numero);
                printf("\nResultado %ff\n",fatorial(numero));
                system("PAUSE");
                system("cls");
            break;
            case 8:
                printf("\nDigite o numero ");
                scanf("%d", &operacao);
                printf("\nDigite x ");
                scanf("%d", &x);
                printf("\nDigite y ");
                scanf("%d", &y);
                printf("\nDigite z ");
                scanf("%d", &z;
                rintf("\nResultado %f\n",calculaMedia(x,y,z,operacao));
                system("PAUSE");
                system("cls");
            break;
            case 9:
                printf("\nDigite o numero ");
                scanf("%d", &numero);
                printf("\nResultado %d\n",numeroDivisores(numero));
                system("PAUSE");
                system("cls");
            break;
            case 10:
                printf("\nDigite o numero ");
                scanf("%d", &numero);
                printf("\nResultado %d\n",enesimoFibonacci(numero));
                system("PAUSE");
                system("cls");
            break;
            case 11:
                printf("\nDigite o numero X");
                scanf("%d", &x);
                printf("\nDigite o numero y");
                scanf("%d", &y);
                printf("\nResultado %d\n",mdc(x,y));
                system("PAUSE");
                system("cls");
            break;
            case 12:
                printf("\nDigite o numero X");
                scanf("%d", &x);
                printf("\nDigite o numero y");
                scanf("%d", &y);
                printf("\nResultado %d\n",mdc(x,y));
                system("PAUSE");
                system("cls");
            break;
            case 0:
                printf("Até logo");
            break;
            default:
                printf("Valor nгo reconhecido como um comando valido\n");
                system("PAUSE");
                system("cls");
            break;
        }
    }
}
