#include <stdio.h>
#include <stdlib.h>

/* 81) Crie um programa que leia a idade de 8 pessoas e guarde-as em um vetor. No
final, mostre:a) Qual é a média de idade das pessoas cadastradas
b) Em quais posições temos pessoas com mais de 25 anos
c) Qual foi a maior idade digitada (podem haver repetições)
d) Em que posições digitamos a maior idade */

void main(){
	int idade[8], i;
	int maior=0;
	float soma = 0, media;
	
	
	for(i = 0; i < 8; i++){
		printf("Digite %i idade: ",i+1);
		scanf("%i",&idade[i]);
		soma = soma + idade[i];
	}
	media = soma / 3;
	printf("=========================\n");
	printf("Media: %.2f \n",media);
	printf("=========================\n");
	
	
	for(i = 0; i < 8; i++){
		if(idade[i] > 25){
			printf("Idade +25 na posicao: %i  \n",i);
		}
	}
	printf("=========================\n");
	for(i = 0; i < 8; i++){
		if(idade[i] > maior){
			maior = idade[i];
		}
	}
	printf("Maior idade: %i \n",maior);
	
	for(i = 0; i < 8; i++){
		if(idade[i] >= maior){
			printf("Maior idade digitada na posicao [%i] \n",i);
		}
	}
	printf("=========================\n");
	
	
}
