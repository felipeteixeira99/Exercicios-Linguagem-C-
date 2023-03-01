#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 83) [DESAFIO] Crie uma l�gica que preencha um vetor de 20 posi��es com n�meros
aleat�rios (entre 0 e 99) gerados pelo computador. Logo em seguida, mostre os
n�meros gerados e depois coloque o vetor em ordem crescente, mostrando no final
os valores ordenados. */

void main(){
	int num[20], i,c, temp;
	
	srand(time(NULL));
	
	for(i=0; i < 20; i++){
		num[i] = rand() % 100 + 1;
	}
	
	printf("Numeros Gerados:");
	for(i=0; i < 20; i++){
		printf(" %i - ",num[i]);
	}
	printf("Fim! \n");
	
	for(i=0; i < 19; i++){
		for(c = i+1; c < 20; c++){
			if(num[i] > num[c]){
				temp = num[i];
				num[i] = num[c];
				num[c] = temp;
			}
		}
	}
	printf("Ordem Crescente: ");
	for(i=0; i < 20; i++){
		printf(" %i - ", num[i]);
	}
	printf("Fim!");
}
