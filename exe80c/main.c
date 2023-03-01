#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 80) Fa�a um algoritmo que preencha um vetor de 30 posi��es com n�meros entre 1 e
15 sorteados pelo computador. Depois disso, pe�a para o usu�rio digitar um
n�mero (chave) e seu programa deve mostrar em que posi��es essa chave foi
encontrada. Mostre tamb�m quantas vezes a chave foi sorteada. */

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

