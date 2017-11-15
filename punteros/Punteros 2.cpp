#include <stdio.h>
#include <stdlib.h>
#include "info.h"
#define MAX 10

int main(int argc, char const *agrv[]){

    appInfoData("Ejemplo de punteros y arreglos","15/11/2017");

  int cals[MAX]={8,9,8,8,6,7,9,8,10,10};
  int *ptrCals;
  
  printf("valor del primer elemneto: %d\n",   cals[0]);
  printf("direccion del primer elemento: %d\n",&cals[0]);
  printf("Direcion del primer elemento %d\n",    cals);
  
  ptrCals = cals;
  
printf("El valor del primer elemento: %d\n", *ptrCals);

return 0;
 
                                }
