#include <stdio.h>
#include <stdlib.h>

/* 71) Faça um programa que preencha automaticamente um vetor numérico com 8
posições, conforme abaixo:
999 999 999 999 999 999 999 999
0 1 2 3 4 5 6 7 */

void main(){
	int vetor[8];
	int i,c;
	
	for(i=0; i < 8; i++){
		vetor[i] = 999;
		printf(" %i ",vetor[i]);
		
	}
	
	printf("\n");
	for(i = 0; i < 8; i++){
		printf(" %i   ",i);
	}
}
	
