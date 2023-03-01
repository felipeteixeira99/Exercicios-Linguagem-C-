#include <stdio.h>
#include <stdlib.h>

/* 79) Desenvolva um programa que leia 10 números inteiros e guarde-os em um vetor.
No final, mostre quais são os números pares que foram digitados e em que
posições eles estão armazenados. */

void main(){
	int num[10];
	int i;
	
	for(i=0; i < 10; i = i + 1){
		printf("Digite o %i valor: ",i+1);
		scanf("%i",&num[i]);
	}
	
	for(i=0; i<10; i++){
		if(num[i] % 2 == 0){
			printf("Numero par na posicao %i - Numero [%i] \n",i,num[i]);	
		}
	}
}
