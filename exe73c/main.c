#include <stdio.h>
#include <stdlib.h>

/* 73) Crie um programa que preencha automaticamente (usando l�gica, n�o apenas
atribuindo diretamente) um vetor num�rico com 10 posi��es, conforme abaixo: */

void main(){
	int i;
	int vet[10];
	
	for(i = 9; i >= 0; i--){
		vet[i] = i;
		printf(" %i ",vet[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 10; i++){
		vet[i] = i;
		printf(" %i ",vet[i]);
	}
}
