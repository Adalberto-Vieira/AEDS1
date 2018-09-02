#include <stdio.h>
#include <Math.h>
double loglcdf(double a, double x ,double b){
    if(x>=0){
        return 1/(1+pow((x/a),b));
    }else{
        return 0;
    }
}

int main(){
    double x, a, b;
    scanf("%f", &x);
    scanf("%f", &a);
    scanf("%f", &b);
    printf("%f",loglcdf(a,x,b));
}
