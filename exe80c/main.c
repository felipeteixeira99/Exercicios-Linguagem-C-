#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 80) Faça um algoritmo que preencha um vetor de 30 posições com números entre 1 e
15 sorteados pelo computador. Depois disso, peça para o usuário digitar um
número (chave) e seu programa deve mostrar em que posições essa chave foi
encontrada. Mostre também quantas vezes a chave foi sorteada. */

void main(){
	int num[30], i, chave, rep=0;
	
	srand(time(NULL));
	
	//gera numeros 
	for(i = 0; i < 30; i++){
		num[i] = rand() % 15 + 1;
	}
	
	//mostra os numeros 
	for(i = 0; i < 30; i++){
		printf("%i ",num[i]);	
	}
	printf("\n");
	
	printf("Digite uma numero: ");
	scanf("%i",&chave);
	
	//verifica quantas vezes foi achado 
	for(i = 0; i < 30; i++){
		if(chave == num[i]){
			rep++;	
		}	
	}
	printf("Numero %i foi encontrado %ix \n",chave,rep);
	//mostra
	for(i = 0; i < 30; i++){
		if(chave == num[i]){
			printf("Numero %i na Posicao [%i] \n ",chave,i);	
		}
	}		
}

