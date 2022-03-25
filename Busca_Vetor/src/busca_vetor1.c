#include <stdlib.h>
#include <stdio.h>
#include "busca_vetor.h"
/**
* Algoritmo que busca um valor digitado pelo usuario em um Vetor.
* @Busca de um n�mero em um vetor.
**/

int Pesquisa_Sequencial(int Vetor[], int Valor, int tamanho_vetor){
	int i;
	for (i = 0; i < tamanho_vetor; i++){ // Percorre todo o vetor;
        printf("Digite o valor do indice %d: ",i);
		scanf ("%d",&Vetor[i]);
    	}
    printf("\n Digite qual valor voce deseja procurar:");
    scanf("%d",&Valor);
	for ( i=0; i < tamanho_vetor; i++){ // Percorre todo o vetor;
		if ( Valor == Vetor[i] ){ // Testa se o valor que est� passando � a "chave";
            return i; // Retorna a posi��o em que foi encontrado o valor;
        }
     }
     return -1; // Retorna -1 se n�o for encontrado;
} 
