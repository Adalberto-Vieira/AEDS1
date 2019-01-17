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
    //invoca a funcao responsavel por caclcular o imc
    IMCBrutos=calculaIMC(pesoBrutos,alturaBrutos);
    //invoca a funcao responsavel por caclcular o imc
    IMCOlivia=calculaIMC(pesoOlivia,alturaOlivia);
    //acho o peso ideal do Brutus
    float pesoIdealBrutos=pesoBrutos-25*alturaBrutos*alturaBrutos;
    //Acha o peso ideal da olivia
    float pesoIdealOlivia=18.5*alturaOlivia*alturaOlivia-pesoOlivia;
    //imprime mensagem para o usuario
    printf("O IMC do Brutus e %.2f e o IMC da Olivia e %.2f.\nBrutus precisa perder, no minimo: %.0f quilos e Olivia precisa ganhar, no minimo, %.0f quilos.",IMCBrutos,IMCOlivia,pesoIdealBrutos,pesoIdealOlivia);
}
