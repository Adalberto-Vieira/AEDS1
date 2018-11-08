#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /* Localiza o codigo para imprimir caracteres especiais. */
    setlocale(LC_ALL, "");
    int contains=0,op, lenghtV,start,fim,v100[100];
    double v8[8];
    float limpa,temp,media=0,v5[5],v10[10],v20[20],sqrtv20[20];
    printf("Digite o n�mero do exerc�cio desejado (0 para encerrar): ");
    scanf("%d",&op);
    while(op!=0){
        switch(op){
            case 1:
                for(int i=0; i<8;i++){
                    printf("\nDigite o n�mero:");
                    scanf("%lf", &v8[i]);
                }
                for(int i=7; i>=0;i--){
                    printf(" %g ", v8[i]);
                }
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                break;
            case 2:
                for(int i=0; i<5;i++){
                    printf("\nDigite o n�mero:");
                    scanf("%f", &v5[i]);
                    media+=v5[i];
                }
                for(int i=0; i<5;i++){
                    printf(" %g ", v5[i]);
                }
                printf("\nMedia %f",media/5);
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                break;
            case 3:
                for(int i=0; i<8;i++){
                    printf("\nDigite o n�mero:");
                    scanf("%lf", &v8[i]);
                }
                printf("\nDigite o 1�:");
                scanf("%d", &start);
                printf("\nDigite o 2�:");
                scanf("%d", &fim);
                printf("\n1� - %g 2� - %g",v8[start],v8[fim]);
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                media=0;
                break;
            case 4:
                for(int i=0; i<10;i++){
                    printf("\nDigite o n�mero:");
                    scanf("%f", &v10[i]);
                }
                printf("\nN�meros menores que 0:");
                for(int i=0; i<10;i++){
                   if(v10[i]<0){
                        printf("%g ",v10[i]);
                   }else{
                        media+=v10[i];
                   }

                }
                printf("\nSoma dos positivos %f",media);
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                media=0;
                break;
            case 5:
                for(int i=0; i<100;i++){
                    v100[i]=i*7;
                    printf("%d\t",v100[i]);
                }
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                media=0;
                break;
            case 6:
                printf("\nDigite o n�mero de elementos:");
                scanf("%d", &lenghtV);
                for(int i = 0; i<lenghtV;i++){
                    printf("\nDigite o n�mero:");
                    scanf("%f", &v20[i]);
                    sqrtv20[i]=sqrt(v20[i]);
                }
                for(int i=0; i<lenghtV;i++){
                    printf(" %g ", sqrtv20[i]);
                }
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                break;
            case 7:
                for(int i=0; i<100;i++){
                    v100[i]=rand()%49;
                }
                for(int i=0; i<100;i++){
                    for(int j=i+1;j<100-i;j++){
                        if(v100[i]==v100[j]){
                            printf("%d ",v100[i]);
                        }
                    }
                }
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                media=0;
                break;
            case 8:
                printf("\nDigite o n�mero:");
                scanf("%f", &v10[0]);
                for(int i=1; i<10;i++){
                    printf("\nDigite o n�mero:");
                    scanf("%f", &temp);
                    for(int k=0;k<10-(10-i);k++){
                        if(v10[k]==temp){
                            contains=1;
                        }
                    }
                    while(contains==1){
                        contains=0;
                        printf("\nO n�mero digitado j� est� contido no vetor. Digite outro n�mero: ");
                        scanf("%f", &temp);
                        for(int k=0;k<10-(10-i);k++){
                            if(v10[k]==temp){
                                contains=1;
                            }
                        }
                    }
                    v10[i]=temp;
                }
                for(int i=0; i<10;i++){
                    printf("%g ",v10[i]);
                }
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                contains=0;
                break;
            default:
                printf("Comando n�o reconhecido");
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                break;

        }
        printf("Digite o n�mero do exerc�cio desejado (0 para encerrar): ");
        scanf("%d",&op);
    }
    printf("At� Logo");

}
