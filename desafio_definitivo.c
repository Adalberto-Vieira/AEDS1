#include <stdio.h>
int max=16000, min=0,tentativas=0,numb,feedback;
int palpite(int numb){
  printf("Tentativa %d\nEu acho que seu numero e %d\nVoce esta certo - 0\nMeu numero e maior - 1\nMeu numero e menor - 2\nResposta: ",tentativas, numb);
  scanf("%d", &feedback);
  if(feedback==0) return 1;
  else if(feedback==1) min = numb;
  else if(feedback==2) max = numb;
  tentativas++;
  palpite((min+max)/2);
}
void main(){
  palpite((min+max)/2);
}
