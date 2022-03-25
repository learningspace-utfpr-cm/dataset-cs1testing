#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"
/**
* Atende o básico, apenas os dados mais comuns de entrada, como números positivos.
* @problem Calcular a formula de Bhaskara.
*/
float bhaskara (float a, float b, float c){
	float delta, x1, x2;
	delta = pow(b,2) - 4*a*c;
 	x1 = (-b + sqrt(delta)) / (2*a);
	x2 = (-b - sqrt(delta)) / (2*a);
	return (1);
} 
