#include "jogo.h"
#include <stdlib.h>
#include <stdio.h>
# include <time.h>

int rolaDados(){
    int val;
    time_t t;
    srand((unsigned) time(&t));
    val=(rand()%6)+(rand()%6)+(rand()%6);
    return val;
}
