#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*76) Crie um programa que preencha automaticamente um vetor numérico com 7
números gerados aleatoriamente pelo computador e depois mostre os valores
gerados na tela. */

void main(){
	int i, vet[7];
	
	srand(time(NULL));
	
	for(i = 0; i < 7; i++){
		vet[i] = rand() % 10 + 1;
	}
	printf("Valores Gerados \n");
	for(i = 0; i < 7; i++){
	printf("%i ", vet[i]);}
}
