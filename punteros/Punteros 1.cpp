#include <stdio.h>
#include <stdlib.h>
#include "info.h"

int main(int argc, char const *agrv[]){

    appInfoData("Ejemplo de punteros","15/11/2017");

int a;
a =10;
int *puntero;
puntero=&a;

printf("%d\n", *puntero);

return 0;
 
                                }
