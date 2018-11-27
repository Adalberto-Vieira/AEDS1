#include <stdio.h>
#include <stdlib.h>
//Compara os arrays
char compareArray(int a[],int b[],int size)	{
  int i, cont=0;
  for(i=0;i<size;i++){
    if(a[i]!=b[i]){
      cont--;
    }
    cont++;
  }
  if(cont==4){
    return 1;
  }else if(cont ==5){
    return 2;
  }else if(cont==6){
    return 0;
  }else{
    return 9;
  }
}
//ordena o array
int cmpfunc (const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
}

void main(){
  //contadores
  int lNumb=0, vNumb=0, qNumb=0, cNumb=0, op=0;
  //Vetor de reposta certa
  int winner[6]={6, 9, 22, 23, 48, 52};
  //Vetor números lost
  int lost[6]={ 4, 8, 15, 16, 23, 42};
  //Vetor temporario para armazenar linhas
  int temp[6];
  //Ponteiro para arquivo
  FILE *arq;
  arq = fopen("cartelas.txt", "r");
  while(!feof(arq)) {
    fscanf(arq, "%d %d %d %d %d %d", &temp[0],&temp[1],&temp[2],&temp[3],&temp[4],&temp[5]);
    qsort(temp, 6, sizeof(int), cmpfunc);
    op=compareArray(temp, winner, 6);
    if(op==0){
      vNumb++;
    }else if(op==1){
      qNumb++;
    }else if(op==2){
      cNumb++;
    }else if(compareArray(temp, lost, 6)==0){
      lNumb++;
    }
  }
  fclose(arq);
  printf("O numero de vencedores e: %d\nO numero de quinas e: %d\nO numero de quadras e: %d\nO numero de pessoas que jogaram nos numeros de lost e %d", vNumb, cNumb, qNumb, lNumb);
}
