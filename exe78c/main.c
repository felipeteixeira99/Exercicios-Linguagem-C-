#include <stdio.h>
#include <stdlib.h>

/* 78) Escreva um programa que leia 15 números e guarde-os em um vetor. No final,
mostre o vetor inteiro na tela e em seguida mostre em que posições foram
digitados valores que são múltiplos de 10. */

void main(){

int num[15], i;

for(i = 0; i < 15; i++){
	printf("Digite o %i numero: ",i+1);
	scanf("%i",&num[i]);
}
	printf("\n Vetor");
	
	for(i = 0; i < 15; i++){
			printf(" %i ",num[i]);	
		}	
	printf("\n");
	
	printf("Valores multiplos de 10 \n");
	for(i = 0; i < 15; i++){
		if(num[i] % 10 == 0){
			printf("Posicao %i - numero [%i] \n",i,num[i]);	
		}	
	}
}
