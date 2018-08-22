#include <stdio.h>

/*
 * Realiza o calculo do IMC de uma pessoa.
 *
 * @param peso          Representa o valor do peso de uma pessoa.
 * @param altura        Representa o valor da altura da pessoa.
 * @return              Valor do IMC
*/
float calculaIMC(float peso, float altura){
    return peso/(altura*altura);
}

int main(){
    float peso=0, altura=0, IMC=0;
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    IMC = calculaIMC(peso, altura);
    printf("O IMC desta pessoa e: %.2f\n", IMC);
    if (IMC < 16){
        printf("O IMC indica magreza grave");
    }else if(IMC < 17){
        printf("O IMC indica Magreza moderada");
    }else if(IMC < 18.5){
        printf("O IMC indica Magreza leve");
    }else if(IMC < 25){
        printf("O IMC indica Sudavel");
    }else if(IMC < 30){
        printf("O IMC indica Sobrepeso");
    }else if(IMC < 35){
        printf("O IMC indica Obesidade grau I");
    }else if(IMC < 40){
        printf("O IMC indica Obesidade grau II (severa)");
    }else{
        printf("O IMC indica Obesidade grau III (morbida)");
    }

}
