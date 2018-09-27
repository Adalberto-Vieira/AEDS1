#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /* Localiza o codigo para imprimir caracteres especiais. */
    setlocale(LC_ALL, "");
    int number[2],v100[100];
    double v8[8];
    float v5[5],v10[10];
    printf("Digite o número do exercício desejado (0 para encerrar): ");
    scanf("%d",&op);
    while(op!=0){
        switch(op){
            case 1:
                printf("\nDigite o número correspondente ao valor n :");
                scanf("%d", &n);
                for(int i=1; i<=n;i++){
                    printf("%d ",i);
                }
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                break;
            case 2:
                printf("\nDigite o número correspondente ao valor n :");
                scanf("%d", &n);
                for(int i=n; i>=0;i--){
                    printf("%d ",i);
                }
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                break;
            case 3:
                printf("\nDigite o número correspondente ao valor n :");
                scanf("%d", &n);
                for(int i=1; i<=n;i+=2){
                    printf("%d ",i);
                }
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                break;
            case 4:
                printf("\nDigite o número correspondente ao valor n :");
                scanf("%d", &n);
                for(int i=0; i<=n;i+=2){
                   result+=i;
                }
                printf("%d ",result);
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                result=0;
                break;
            case 5:
                for(int i=0; i<10;i++){
                    printf("\nDigite o número correspondente ao valor n :");
                    scanf("%d", &n);
                    result+=n;
                }
                printf("%d ",result/10);
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                result=0;
                break;
            case 6:
                printf("\nDigite o número correspondente ao valor n :");
                scanf("%d", &n);
                for(int i=1; i<=n;i++){
                   if(n%i==0){
                        printf("%d ", i);
                   }
                }
                printf("%d ",result);
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                result=0;
                break;
            case 7:
                for(int i=1; i<=1000;i++){
                    if(i%3==0 ||i%5==0)
                        result+=i;
                }
                printf("%d ",result);
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                result=0;
                break;
            case 8:
                printf("\nDigite inteiros positivos: ");
                scanf("%d", &number);
                min=number;
                while(number>=0){
                    scanf("%d", &number);
                    if(number<min){
                        min==number;
                    }
                    if(number>max){
                        max==number;
                    }
                }
                printf("O maior número foi %d\nO menor número foi %d",max,min);
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                result=0;
                break;
            default:
                printf("Comando não reconhecido");
                fflush(stdin);
                printf("\nDigite algo para continuar");
                getchar();
                system("@cls||clear");
                result=0;
                break;

        }
        printf("Digite o número do exercício desejado (0 para encerrar): ");
        scanf("%d",&op);
    }
    printf("Até Logo");

}
