#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 60) Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas.
O programa vai perguntar se o usuário quer ou não continuar. No final, mostre:
a) O nome da pessoa mais velha
b) O nome da mulher mais jovem
c) A média de idade do grupo
d) Quantos homens tem mais de 30 anos
e) Quantas mulheres tem menos de 18 anos */

void main(){
	char continua = 's';
	char nome[20], maisVelha[20], mulherJovem[20];
	char sexo;
	int i=1, idade=0, idadeMaior = 0, idadeMJ = 999, homens30=0, menos18=0;
	float mediaTotal, somaTot=0;
	
	
	while(continua == 's' || continua == 'S'){
		printf("Digite o nome da %i pessoa: ",i);
		scanf("%s",nome);
		printf("Digite a idade da %i pessoa: ",i);
		scanf("%d",&idade);
		printf("Digite o sexo da %i pessoa [M/F]: ",i);
		scanf(" %c",&sexo);
		
		
		if(idade > idadeMaior){
			idadeMaior = idade;
			strcpy(maisVelha, nome);
		}
		
		if(sexo == 'f' || sexo == 'F'){
			if(idade < idadeMJ){
				idadeMJ = idade;
				strcpy(mulherJovem, nome);
			}
			if(idade < 18){
				menos18++;
			}
		}
		
		if(sexo == 'm' || sexo == 'M'){
			if(idade > 30){
				homens30++;
			}
		}
		
		somaTot = somaTot + idade;

		printf("Deseja fazer mais lancamentos? [S/N] ");
		scanf(" %c",&continua);
		
		i++;
}

mediaTotal = somaTot / (i - 1);
printf("A pessoa mais velha e: %s (idade: %d)\n",maisVelha,idadeMaior);
printf("A mulher mais jovem e: %s (idade: %d)\n",mulherJovem,idadeMJ);
printf("A media de idade do grupo e: %.2f \n",mediaTotal);
printf("Homens com mais de 30 anos: %i \n",homens30);
printf("Mulheres com menos de 18 anos: %i \n",menos18);
}
