#include "modules/controladorJogo.c"

void main(int argc, char *argv[ ]){
  if(argc>1){
    startWithParameters(argc, argv);
  }else{
    start();
  }
}
