#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"
/**
* Atende o básico, apenas os dados mais comuns de entrada.
* Pressupõe um cenário ideal, no qual o usuário entre com informações óbvias.
* @problem Calcular a formula de Bhaskara.
* @version 01
* @param a,b,c
* @return x1, x2
*/
float bhaskara (float a, float b, float c){
	float delta, x1, x2;
	delta = pow(b,2) - 4*a*c;
 	x1 = (-b + sqrt(delta)) / (2*a);
	x2 = (-b - sqrt(delta)) / (2*a);
	return (x1,x2);
} 