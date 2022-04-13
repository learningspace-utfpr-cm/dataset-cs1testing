#include <stdlib.h>
#include <stdio.h>
#include "busca_vetor.h"
/**
* Algoritmo que busca um valor digitado pelo usuario em um Vetor.
* Caso o tamanho do vetor fornecido como parametro seja diferente to tamanhao real do algoritmo, o retorno será -1
* Caso não seja encontrado o valor informado pelo usuario, o algoritmo retoranrá 0
* @Busca de um número em um vetor.
**/

int busca_vetor (int *v, int tamanho_vetor, int valor) {
	
	size_t len = sizeof(*v)+1;
		
	if(len!=tamanho_vetor){
		return -1;
	}
	else{
		for (int i = 0; i < tamanho_vetor; i++) {
			if (v[i]==valor){
        		return i; 
	        	}
	        	}
        		return 0;
     	}	
    }


