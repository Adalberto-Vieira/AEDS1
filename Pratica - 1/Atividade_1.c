#include <stdio.h>

/*
 * Realiza o calculo de juros sobre um valor de montante lenvando em conta a movimenta��o.
 *
 * @param juros         Representa o valor da taxa de juros
 * @param montante      Representa o valor de capital sobre o qual o calculo de juros ser� realizado
 * @param movimentacao  Representa o valor de transi��es realizadas
 * @return              Valor do montante ap�s soma da movimenta��o e aplica��o de juros
*/
float rendimento(float juros, float montante, float movimentacao){
    montante+=movimentacao;
    montante=montante*juros;
    return montante;
}

int main(){
    const float TAXA=1.0056;
    float montante=0;
    montante= rendimento(TAXA, montante, 789.54);
    montante= rendimento(TAXA, montante, 303.20);
    montante= rendimento(TAXA, montante, -58.25);
    printf("A conta tera %.2f no quarto mes\n",montante);
    system("PAUSE");
}
