#include <stdio.h>
#include <stdlib.h>

/* 77) Faça um programa que leia 7 nomes de pessoas e guarde-os em um vetor. No
final, mostre uma listagem com todos os nomes informados, na ordem inversa
daquela em que eles foram informados. */

void main(){
	char nome[7][50];
	int i;
	
	for(i = 0; i < 7; i++){
		printf("Digite o %i nome: ",i+1);
		scanf(" %s",nome[i]);
	}

	for(i = 7; i >= 0; i--){
		printf("%s \n",nome[i]);
}
}
	
