#include <stdio.h>

int calc (){
	int x = 150 + 65 * 5;
	x += 30;
	return (x);
}

main(){
	int y = calc();
	printf ("Resultado: %i",y);
}
