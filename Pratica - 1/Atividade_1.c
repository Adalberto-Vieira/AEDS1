#include <stdio.h>

/*
 * Realiza o calculo de juros sobre um valor de montante lenvando em conta a movimentacao.
 *
 * @param juros         Representa o valor da taxa de juros
 * @param montante      Representa o valor de capital sobre o qual o calculo de juros sera realizado
 * @param movimentacao  Representa o valor de transisoes realizadas
 * @return              Valor do montante apos soma da movimentacao e aplicacao de juros
*/
float rendimento(float juros, float montante, float movimentacao){
    montante+=movimentacao;
    montante=montante*juros;
    return montante;
}

int main(){
    //Define o valor da taxa como uma constante
    const float TAXA=1.0056;
    //Define a variavel do montante
    float montante=0;
    //Calcula rendimentos
    montante= rendimento(TAXA, montante, 789.54);
    //Calcula rendimentos
    montante= rendimento(TAXA, montante, 303.20);
    //Calcula rendimentos
    montante= rendimento(TAXA, montante, -58.25);
    //Imprime o valor
    printf("A conta tera %.2f no quarto mes\n",montante);
}
