#include <stdio.h>
#include <locale.h>

int main(){
    /* Localiza o codigo para imprimir caracteres especiais. */
    setlocale(LC_ALL, "");
    //incia as Variaveis
    int peso=2,aux=0;
    //Inicia vetores representando cpf e numero verificador
    char CPF[12]="",numVerificador[3]="";
    //limpa buffer de entrada
    fflush(stdin);
    //lê o CPF
    scanf("%s",CPF);
    //laço de repetição que interage com cada digito do cpf a partir do 8
    for(int index=8;index>=0;index--){
        //calculo digito verificador
        aux+=(CPF[index]- '0')*peso;
        //incrementa o peso
        peso++;
    }
    //mod para calcular digito verificador
    aux=aux%11;
    //Avalia o primeiro valor do digito verificador
    if(aux==0||aux==1){
        //atribui o primeiro numerio do digito verificador
        numVerificador[0]='0';
        CPF[9]='0';
    }else{
        aux=11-aux;
        //atribui o primeiro numerio do digito verificador
        numVerificador[0]=(aux+'0');
        CPF[9]=(aux+'0');
    }
    //Reinicia os valores
    aux=0;
    peso=2;
    //laço de repetição para segundo digito vareficador
    for(int i=9;i>=0;i--){
        aux+=(CPF[i]- '0')*peso;
        peso++;
    }
    //mod de aux
    aux=aux%11;
    //seleciona o segundo digito verificador
    if(aux==0||aux==1){
        numVerificador[1]='0';
        CPF[10]='0';
    }else{
        aux=11-aux;
        numVerificador[1]=(aux+'0');
        CPF[10]=(aux+ '0');
    }
    //adiciona end line ao CPF
    CPF[11] = '\0';
    //Adiciona ENDL ao numVerificador
    numVerificador[2] = '\0';
    //Printa os resultados
    printf("O digito verificador e: %s\nO cpf completo e: %s",numVerificador,CPF);
}
