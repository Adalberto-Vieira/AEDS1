#include "estatistica.h"
#include <stdio.h>

double cauchy(double x){
    return 1/(M_PI*((1+pow(x,2))));
}
double gumbel(double x, double y, double b){
    double z = ((x-y)/b);
    return ((1/b)*exp(-(z+exp(-z))));
}
double laplace(double x, double y, double b){
    double aux= - fabs(x-y);
    return (1/(2*b))*exp(aux/b);
}
