#include <stdio.h>

void main(){
    int x = 0;
    int *p =&x;
    *p=3;
    printf("%d", x);
}
