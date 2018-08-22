#include <stdio.h>
#include <locale.h>

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
    float pesoBrutos=122, alturaBrutos=1.84, IMCBrutos=0,pesoOlivia=45,alturaOlivia=1.76, IMCOlivia=0;
    /* Localiza o codigo para imprimir caracteres especiais. */
    setlocale(LC_ALL, "");
    IMCBrutos=calculaIMC(pesoBrutos,alturaBrutos);
    IMCOlivia=calculaIMC(pesoOlivia,alturaOlivia);
    float pesoIdealBrutos=pesoBrutos-25*alturaBrutos*alturaBrutos;
    float pesoIdealOlivia=18.5*alturaOlivia*alturaOlivia-pesoOlivia;
    printf("O IMC do Brutus é %.2f e o IMC da Olívia é %.2f.\nBrutus precisa perder, no mínimo: %.0f quilos e Olívia precisa ganhar, no mínimo, %.0f quilos.",IMCBrutos,IMCOlivia,pesoIdealBrutos,pesoIdealOlivia);
}
