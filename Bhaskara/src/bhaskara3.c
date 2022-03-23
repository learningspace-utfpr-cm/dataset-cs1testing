#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"
/**
* Estrutura condicional implementada que verirfica se o delta é negativo.
* @problem Calcular a formula de Bhaskara.
* @version 03
* @param a,b,c
* @return x1, x2
*/
float bhaskara (float a, float b, float c){
 	
	delta = pow(b,2) - 4*a*c;
	if(delta < 0) {
	 	printf("A equação não possui raízes reais!");
	 	} else {
		 x1 = (-b + sqrt(delta)) / (2*a);
		 x2 = (-b - sqrt(delta)) / (2*a);
		 } 
	return (x1,x2);	 		 
}
