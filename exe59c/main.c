#include <stdio.h>
#include <stdlib.h>

/* 59) Crie um programa que leia o sexo e a idade de v�rias pessoas. O programa vai
perguntar se o usu�rio quer continuar ou n�o a cada pessoa. No final, mostre:
a) qual � a maior idade lida
b) quantos homens foram cadastrados
c) qual � a idade da mulher mais jovem
d) qual � a m�dia de idade entre os homens */

void main(){
	int i = 1, idade = 0;
	int maior=0, homens = 0, mjovem=1000, somaH=0;
	float media;
	char resp = 's';
	char sexo;

	
	
	while(resp == 's' || resp == 'S'){
		printf("Digite o sexo da %i pessoa [M/F]: ",i);
		scanf("%c",&sexo);
		printf("Digite a idade %i pessoa: ",i);
		scanf("%d",&idade);
		
		printf("Deseja lancar mais pessoas? [S/N]: ");
		scanf(" %c",&resp);
		getchar(); //limpa buffer teclado
		system("cls");
		
		if(maior < idade){
			maior = idade;
		}
		
		if((sexo == 'm') || (sexo == 'M')){
		homens++;
		somaH = somaH + idade;
		}
		
		else if(sexo == 'F' || sexo == 'f'){
			if(idade < mjovem){
				mjovem = idade;
			}
		}
		i++;
	}
	media = somaH / homens;
	system("cls");
	printf("\n");
	printf("Voce encerrou a aplicacao! \n");
	printf("Maior idade: %i anos \n",maior);
	printf("Homens cadastrados: %i \n",homens);
	printf("Media de idade dos homens %.2f \n",media);
	printf("Idade da mulher mais jovem: %i \n",mjovem);
}
