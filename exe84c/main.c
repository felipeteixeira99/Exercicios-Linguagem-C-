#include <stdio.h>
#include <stdlib.h>

/* 84) Crie um programa que leia o nome e a idade de 9 pessoas e guarde esses
valores em dois vetores, em posições relacionadas. No final, mostre uma listagem
contendo apenas os dados das pessoas menores de idade. */

void main(){
	char nome[9][50];
	int idade[9],i;
	
	for(i = 0; i < 9; i++){
		printf("Digite o %i nome: ",i+1);
		scanf("%s",nome[i]);
		printf("Digite a %i idade: ",i+1);
		scanf("%i",&idade[i]);
	}
	system("cls");
	printf("Pessoas menores de idade: \n");	
	
	for(i = 0; i < 9; i++){
		if(idade[i] < 18){
			printf("Nome: %s / Idade %i\n",nome[i],idade[i]);	
		}
		}
}
