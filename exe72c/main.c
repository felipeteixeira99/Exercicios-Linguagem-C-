#include <stdio.h>
#include <stdlib.h>

/* 72) Crie um programa que preencha automaticamente (usando lógica, não apenas
atribuindo diretamente) um vetor numérico com 10 posições, conforme abaixo:
5 10 15 20 25 30 35 40 45 50
0 1 2 3 4 5 6 7 8 9 */

void main(){
	int vet[10];
	int i,c;
	
	for(i = 5; i <= 50; i+=5){
		printf(" %i ",i);
	}
	
	printf("\n");
	
	for(i = 0; i < 10; i++){
		vet[i] = i;
		printf(" %i  ",vet[i]);
	}
}
