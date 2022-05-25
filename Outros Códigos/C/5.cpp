#include <stdio.h>

char x (){
	unsigned char y = 0;
	y++;
	return (y);
}

main(){
	unsigned char y = x();
	printf ("Resultado: %s",y);
}
