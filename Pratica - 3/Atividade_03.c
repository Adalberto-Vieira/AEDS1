#include <stdio.h>

void main(){
    float x,y;
    scanf("%f %f", &x, &y);
    //coloque seu c�digo aqui:
    x = x+y;
    y= x-y;
    x=x-y;
    printf("\nx = %f\ny = %f", x, y);
}
