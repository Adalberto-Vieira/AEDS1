#include <stdio.h>

unsigned long long fast_pow_2(int expoente){
    return 2 << expoente-1;
}

void main(){
    int expoente=2;
    unsigned long long valor;
    do{
        valor=fast_pow_2(expoente);
        expoente++;
    }while(valor>2);
    expoente-=2;
    printf("O valor e - %llu \nO expoente e - %d",fast_pow_2(expoente),expoente);
}
