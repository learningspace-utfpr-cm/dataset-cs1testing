#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "mdc.h"

/*
Terceira versão do código: O máximo divisor comum (MDC)
Além do tratamento dos dados de entrada sejam iguais a zero, foi incluido a função ABS, que retorna o valor absoluto no final da função.
Esse recurso foi implementado pára o algoritmo trazer o resultado correto no caso do usuário entrar com valores negativos.
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
	a = abs(a);
	return (a);
} 


