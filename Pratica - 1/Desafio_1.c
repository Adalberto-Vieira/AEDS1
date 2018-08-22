#include <stdio.h>
#include <locale.h>

int main(){
    /* Localiza o codigo para imprimir caracteres especiais. */
    setlocale(LC_ALL, "");
    int peso=2,aux=0;
    char CPF[12]="",numVerificador[3]="";
    fflush(stdin);
    scanf("%s",CPF);
    for(int index=8;index>=0;index--){
        aux+=(CPF[index]- '0')*peso;
        peso++;
    }
    aux=aux%11;
    if(aux==0||aux==1){
        numVerificador[0]='0';
        CPF[9]='0';
    }else{
        aux=11-aux;
        numVerificador[0]=(aux+'0');
        CPF[9]=(aux+'0');
    }
    aux=0;
    peso=2;
    for(int i=9;i>=0;i--){
        aux+=(CPF[i]- '0')*peso;
        peso++;
    }
    aux=aux%11;
    if(aux==0||aux==1){
        numVerificador[1]='0';
        CPF[10]='0';
    }else{
        aux=11-aux;
        numVerificador[1]=(aux+'0');

        CPF[10]=(aux+ '0');
    }
    CPF[11] = '\0';
    numVerificador[2] = '\0';
    printf("O digito verificador é: %s\nO cpf completo é: %s",numVerificador,CPF);
}

