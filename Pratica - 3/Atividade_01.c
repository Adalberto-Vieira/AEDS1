#include <stdio.h>
#include <Math.h>

float parteInteira(float x){
    return trunc(x);
}

float parteFracionaria(float x){
    return x - trunc(x);
}
float divInts(int x, int y){
    return x/y;
}
int main(){
    printf("parteInteira - %f\n",parteInteira(-3.141592));
    printf("parteInteira - %f\n",parteInteira(4.8));
    printf("parteInteira - %f\n",parteInteira(8.0));
    printf("parteFracionaria - %f\n",parteFracionaria(-3.141592));
    printf("parteFracionaria - %f\n",parteFracionaria(4.999999));
    printf("parteFracionaria - %f\n",parteFracionaria(8.0));
    printf("divInts - %f\n",divInts(3, -2));
    printf("divInts - %f\n",divInts(0, -4));
    printf("divInts - %f\n",divInts(8, 2));
}
