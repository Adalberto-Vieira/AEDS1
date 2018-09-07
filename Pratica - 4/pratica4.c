#include "pratica4.h"
#include <Math.h>

float areaCirculo(float raio){
    return 2*M_PI*raio;
}

float paraMetrosPorSegundo(float v){
    return v/3.6;
}

int ehPar(int n){
    return !(number & 0x01);
}

int ehDivisivelPor3ou5(int n){
    return n%3==0 ^ n%5==0;
}

float pesoIdeal(float h, char sexo){

}
