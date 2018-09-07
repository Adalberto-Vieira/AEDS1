#include <stdio.h>

void soma1(int *x){
    *x+=1;
}
float parteFracionaria(float x){
    int aux = 0;
    while(x>0?aux<x&&(aux+1<x||x-(aux+1)==0):aux<-x&&(aux+1<-x||-x-(aux+1)==0)){
        soma1(&aux);
    }
    return x>0?x-aux:x+aux;
}
void main(){
    float x = 0;
    scanf("%f", &x);
    printf("%f", parteFracionaria(x));
}

