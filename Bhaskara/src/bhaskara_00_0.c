#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"
/**
* @problem Calcular a formula de Bhaskara.
* @solution Implementado rotida que verifica se o A é igual zero
* caso for, o algoritmo será resolvido como equação do segundo grau.
*/
float bhaskara (float a, float b, float c, float *x1, float *x2){

  
 if (a==0){
 	//bx + c = 0
	float x = (-c) / b;
	//printf("Equação do primeiro grau!");
	return (1);
} 
 
float delta = pow(b,2) - 4*a*c;
 //printf ("O valor de delta é %f\n",delta); 

 if(delta < 0) 
	 {
	 //printf("A equação não possui raízes reais!");
	 return (-1);
	 } 
		 else 
		 {
		 *x1 = (-b + sqrt(delta)) / (2*a);
		 *x2 = (-b - sqrt(delta)) / (2*a);
		 //printf("O valor de x1: %.2f\n", x1);
		 //printf("O valor de x2: %.2f\n", x2);
		 return (2);
		 } 
	}
