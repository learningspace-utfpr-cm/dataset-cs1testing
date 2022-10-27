#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"
/**
* @problem Calcular a formula de Bhaskara.
* @solution Implementado rotida que verifica se o A � igual zero
* caso for, o algoritmo ser� resolvido como equa��o do segundo grau.
*/
float bhaskara (float a, float b, float c, float *x1, float *x2){

int delta;
delta= (b*b) - ((4*a)*c);
x1= -b + sqrt(delta) / 2*a;
x2= -b - sqrt(delta) / 2*a;
return (2);
}
