#include <stdlib.h>
#include <stdio.h>
#include "busca_vetor.h"
/**
* Atende o básico, apenas os dados mais comuns de entrada.
* Pressupõe um cenário ideal, no qual o usuário entre com informações óbvias.
* @problem Calcular o Máximo Divisor Comum entre dois números (MDC).
* @param a
* @param b
* @return mdc
*/

int fPesquisa_Sequencial(int *pVetor, int pChave , int pQuantidade);

int main()
{
    int TAM = 5;
    int vVetor[TAM];
    int vAux;
    int vChave;

    for (vAux=0; vAux<TAM; vAux++)
    {
        printf("Digite o valor do indice %d: ",vAux);
		scanf ("%d",&vVetor[vAux]);
    }

    printf("\n Digite qual valor voce deseja procurar:");
    scanf("%d",&vChave);
	
	int indice = fPesquisa_Sequencial(vVetor, vChave , TAM);
	
    if ( indice != -1 )
        printf("\n Valor encontrado no indece %d !\n\n ",indice); // Se a fun��o retornar diferente de -1 ent�o foi encontrado;
    
	else // Sen�o n�o foi encontrado;
        printf("\n Valor nao encontrado!\n\n ");

}

int fPesquisa_Sequencial(int *pVetor, int pChave , int pQuantidade)
{
     int vAux;

     for ( vAux=0; vAux < pQuantidade; vAux++ ) // Percorre todo o vetor;
     {
         if ( pChave == pVetor[vAux] ) // Testa se o valor que est� passando � a "chave";
             return vAux; // Retorna a posi��o em que foi encontrado o valor;
     }

     return -1; // Retorna -1 se n�o for encontrado;
} 
