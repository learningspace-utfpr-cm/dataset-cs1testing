#include <stdlib.h>
#include <stdio.h>
#include "mdc.h"

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


