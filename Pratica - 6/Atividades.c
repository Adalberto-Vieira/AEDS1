#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>
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
        if(crivo[i]==i&&i!=2){
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
double fatorial(int n){
    if (n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}
double eFuncFat(unsigned int n){
    double result = 1;
    while(n>1){
        result += 1/fatorial(n);
        n--;
    }
    return result;
}
double eNoFuncFat(unsigned int n){
    double result = 1;
    unsigned int aux=1;
    double fat=1;
    while(n>1){
        aux =n;
        while(aux>1){
            fat *= aux;
            aux--;
        }
        result += (1/fat);
        fat=1;
        n--;
    }
    return result;
}
int main(){
    /* Localiza o codigo para imprimir caracteres especiais. */
    setlocale(LC_ALL, "");
    double number;
    float tempo;
    unsigned int Nprimo;
    clock_t Ticks[4];
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
    printf("\ndigite o número para fatorial: ");
    scanf ("%lf",&number);
    printf("\nO fatorial é %f", fatorial(number));
    fflush(stdin);
    printf("\ndigite o número para serie E com a função de fatorial: ");
    scanf ("%d",&Nprimo);
    Ticks[0] = clock();
    number = eFuncFat(Nprimo);
    Ticks[1] = clock();
    printf("\nO E é igual a %f\nA função demorou %g", number, (Ticks[1] - Ticks[0])/ (double)CLOCKS_PER_SEC);
    fflush(stdin);
    printf("\ndigite o número para serie E sem a função de fatorial: ");
    scanf ("%d",&Nprimo);
    Ticks[2] = clock();
    number = eNoFuncFat(Nprimo);
    Ticks[3] = clock();
    printf("\nO E é igual a %f\nA função demorou %g", number, (Ticks[3] - Ticks[2]) / (double)CLOCKS_PER_SEC);
    printf("\nA segunda maneira é menos eficiente");
    getchar();
    return 0;

}
