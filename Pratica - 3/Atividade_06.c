#include <stdio.h>
#include <Math.h>
unsigned long long fast_pow_2(int expoente){
    return 2 << expoente-1;
}
int ddd(unsigned int number){
    int ddd;
    number = number/100000000;
    ddd=number%10;
    number = number/10;
    ddd += 10*(number%10);
    return ddd;
}
int soma1SePar(unsigned int number){
    int i = !(number & 0x01);
    i += number;
    return i;

}
int parOuImpar(unsigned int number){
    return !(number & 0x01);
}
void main(){
    printf("DDD (31)- %d\n", ddd(3133244156));
    printf("DDD (21)- %d\n", ddd(2133244156));
    printf("DDD (19)- %d\n", ddd(1933244156));
    printf("soma 1 se par (2)- %d\n", soma1SePar(2));
    printf("soma 1 se par (5)- %d\n", soma1SePar(5));
    printf("soma 1 se par (8)- %d\n", soma1SePar(8));
    printf("Par ou impar (4)- %d\n", parOuImpar(4));
    printf("Par ou impar (3)- %d\n", parOuImpar(3));
    printf("Par ou impar (7)- %d\n", parOuImpar(7));
}

