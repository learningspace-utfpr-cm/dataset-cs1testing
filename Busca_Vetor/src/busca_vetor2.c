#include <stdlib.h>
#include <stdio.h>
#include "mdc.h"
/**
* Foi realizado um tratamento para que o Algoritmo retorne zero caso um ou ambos os dados de entrada sejam iguais a zero.
* @author Yuri Feitosa
* @problem Calcular o Máximo Divisor Comum entre dois números (MDC).
* @version 02
* @param a
* @param b
* @return mdc
*/
int mdc (int a, int b){
	int resto;
	if ((a==0)||(b==0)){
		return (0);
		}
	else
	while (b != 0){
		resto = a % b;
		a = b;
		b = resto;
		}
	return (a);
} 