#include <stdio.h>

void troca(float *end_valor1, float *end_valor2){
    *end_valor1= *end_valor1+*end_valor2;
    *end_valor2= *end_valor1-*end_valor2;
    *end_valor1= *end_valor1-*end_valor2;
}

void main(){
    float x,y;
    scanf("%f %f", &x, &y);
    //coloque seu código aqui:
    troca(&x,&y);
    printf("\nx = %f\ny = %f", x, y);
}

