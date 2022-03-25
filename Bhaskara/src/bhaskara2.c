#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"
/**
* @problem Calcular a formula de Bhaskara.
* @solution Implementado estrutura condicional para verirficar se o delta é negativo.
*/
float bhaskara (float a, float b, float c){
 	
	delta = pow(b,2) - 4*a*c;
	if(delta < 0) {
	 	return (-1);
	 	} else {
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
	 	return (1);	 		 
		} 
}
