#include <stdio.h>

float calc (){
	int x = 5;
	int y = 2;
	float z = x/y;
	return (z);
}

main(){
	float y = calc();
	printf ("Resultado: %f",y);
}
