#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "mdc.h"
/**
* Incluído a função ABS, que retorna o valor absoluto no final da função.
* Esse recurso foi implementado para o algoritmo trazer o resultado correto no caso do usuário entrar com valores negativos.
* @author Yuri Feitosa
* @problem Calcular o Máximo Divisor Comum entre dois números (MDC).
* @version 03
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
	a = abs(a);
	return (a);
} 