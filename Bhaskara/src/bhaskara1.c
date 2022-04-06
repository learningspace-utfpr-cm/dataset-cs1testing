#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"
/**
* Atende o básico, dados de entrada que devem calcular o delta como positivo, sonsequentemente ambas as raizes.
* @problem Calcular a formula de Bhaskara.
*/
float bhaskara (float a, float b, float c, float *x1, float *x2){
	float delta;
	delta = pow(b,2) - 4*a*c;
 	*x1 = (-b + sqrt(delta)) / (2*a);
	*x2 = (-b - sqrt(delta)) / (2*a);
	return (2);
} 
