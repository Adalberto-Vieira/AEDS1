#include <stdio.h>

void soma1(int *x){
    *x+=1;
}
void main(){
    float x = 0;
    int aux = 0;
    scanf("%f", &x);
    while(x>0?aux<x:aux<-x){
        soma1(&aux);
    }
    aux--;
    printf("%f", x>0?x-aux:x+aux);
}

