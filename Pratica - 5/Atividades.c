#include <stdio.h>
#include <math.h>
#include <locale.h>

double harmonico(double n){
    double temp=1;
    while(n>1){
        temp+=1/n;
        n--;
    }
    return temp;
}
void floyd(unsigned int n){
    int breaker=1, conter=0;
    for(int i=1; i<=n; i++){
        if(conter==breaker){
            printf("\n%d ",i);
            conter=0;
            breaker++;
        }else{
            printf("%d ",i);
        }
        conter++;
    }

}
int primo(unsigned int n){
    unsigned int max = trunc(sqrt(n))+1;
    int crivo[max];
    for (int i=2; i<=max; i++){
        crivo[i]=i;
    }
    for(int i=2; i<=max; i++){
        if(crivo[i]==i){
            if(n%i==0){
                return 0;
            }
            for (int j=i+i; j<=max; j+=i) {
                crivo[j]=0;
            }
        }
    }
    return 1;

}
void main(){
    /* Localiza o codigo para imprimir caracteres especiais. */
    setlocale(LC_ALL, "");
    double number;
    unsigned int Nprimo;
    printf("digite o número para calculo de harmonico: ");
    scanf ("%lf",&number);
    printf("O harmonico de %f é %f", number, harmonico(number));
    fflush(stdin);
    printf("\ndigite o número para usar com floyd: ");
    scanf ("%d",&Nprimo);
    floyd(Nprimo);
    fflush(stdin);
    printf("\ndigite o número para saber o primo: ");
    scanf ("%d",&Nprimo);
    if(primo(Nprimo)==1){
        printf("\nO número %d é primo", Nprimo);
    }else{
        printf("\nO número %d não é primo", Nprimo);
    }
    fflush(stdin);
}
