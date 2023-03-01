#include <stdio.h>
#include <stdlib.h>

/* 85) Faça um algoritmo que leia o nome, o sexo e o salário de 5 funcionários e
guarde esses dados em três vetores. No final, mostre uma listagem contendo
apenas os dados das funcionárias mulheres que ganham mais de R$5 mil. */

void main(){
	int i;
	char sexo[10][2], nome[10][50];
	float salario[10];
	
	for(i=0; i < 5; i++){
		printf("Digite o %i nome: ",i+1);
		scanf("%s",nome[i]);
		printf("Digite o sexo: [M/F] ");
		scanf("%s",sexo[i]);
		printf("Digite o salario: R$ ");
		scanf("%f",&salario[i]);
	}
	system("cls");
	printf("Funcionarias que ganham mais de 5mil/mes \n");
	
	for(i=0; i < 5; i++){
		if(sexo[i][0] == 'F' || sexo[i][0] == 'f'){
			if(salario[i] > 5000){
				printf("Nome: %s \n",nome[i]);
				printf("Salario: R$%.2f \n",salario[i]);
			}		
		}
	}
}
