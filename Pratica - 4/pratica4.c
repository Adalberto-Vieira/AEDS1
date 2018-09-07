#include "pratica4.h"
#include <Math.h>

float areaCirculo(float raio){
    return 2*M_PI*raio;
}

float paraMetrosPorSegundo(float v){
    return v/3.6;
}

int ehPar(int n){
    return !(n & 0x01);
}

int ehDivisivelPor3ou5(int n){
    return n%3==0 ^ n%5==0;
}

float pesoIdeal(float h, char sexo){
    return sexo=='F' ? 62.1*h-44.7:72.7*h-58;
}

int somaImpares(int N){
    return ((N*(N+1))/2-250)/2;
}
double fatorial(int N){
    double fatorial;
    while (N > 0) {
        fatorial = fatorial *  N;
        N--;
    }
    return fatorial;
}
int somaNumerosDiv3ou5(int N){
    int soma=0;
    while(N > 0){
        if(ehDivisivelPor3ou5(N)){
            soma += N;
        }
        N--;
    }
    return soma;
}
float calculaMedia(int x, int y, int z, int operacao){
    switch (operacao){
        case 1:
            return pow((x*y*z), -3);
            break;
        case 2:
            return ((x+2)*(y+3)*z)/6;
            break;
        case 3:
            return 3/((1/x)+(1/y)+(1/z));
            break;
        case 4:
            return (x+y+z)/3;
            break;
    }
}
int numeroDivisores(int N){
    int cont=1;
    while(N>0){
        if(N%cont==0){
            cont++;
        }
        N--;
    }
    return cont;
}
int enesimoFibonacci(int N){
    if(N == 1) {
        return 0;
    } else if(N == 2) {
        return 1;
    } else {
        return enesimoFibonacci(N-1) + enesimoFibonacci(N-2);
    }
}
int mdc(unsigned int x, unsigned int y){
    unsigned int resto=x%y;
    while(resto!=0){
        x=y;
        y = resto;
        resto = x%y;
    }
    return y;
}
int mmc(unsigned int x, unsigned int y){
    unsigned int resto=x%y;
    while(resto!=0){
        x=y;
        y = resto;
        resto = x%y;
    }
    return y;
}
