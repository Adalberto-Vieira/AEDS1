#include <stdio.h>
#include <Math.h>
unsigned long long fast_pow_2(int expoente){
    return 2 << expoente-1;
}
int ddd(unsigned int number){
    int cont=0,ddd;
    unsigned int aux=number;
    do{
        aux = aux / 10;
        cont+=1;
    }while(aux != 0);
    ddd=((number/pow(10,cont-1))*10+(number/pow(10,cont-2)))/2;
    return ddd;
}
void main(){
    printf("%d", ddd(3634095858));
}

