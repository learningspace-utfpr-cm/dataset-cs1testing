#include <stdlib.h>
#include <stdio.h>
#include "mdc.h"
/**
* Atende o básico, apenas os dados mais comuns de entrada.
* Pressupõe um cenário ideal, no qual o usuário entre com informações óbvias.
* @author Yuri Feitosa
* @problem Calcular o Máximo Divisor Comum entre dois números (MDC).
* @version 01
* @param a
* @param b
* @return mdc
*/
int mdc (int a, int b){
	int resto;
	while (b != 0){
		resto = a % b;
		a = b;
		b = resto;
		}
	return (a);
} 