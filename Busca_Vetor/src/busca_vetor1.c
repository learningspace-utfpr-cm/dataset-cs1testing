#include <stdlib.h>
#include <stdio.h>
#include "busca_vetor.h"
/**
* Algoritmo que busca um valor digitado pelo usuario em um Vetor.
* @Busca de um número em um vetor.
**/

int busca_vetor (int *v, int tamanho_vetor, int valor) {
		
    for (int i = 0; i < tamanho_vetor; i++) {
   		if (v[i]==valor){
        	return i; 
        }
     }
    }
