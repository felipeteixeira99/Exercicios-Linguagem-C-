#include <stdio.h>
#include <stdlib.h>

/* 62) Fa�a um programa usando a estrutura �fa�a enquanto� que leia a idade de
v�rias pessoas. A cada la�o, voc� dever� perguntar para o usu�rio se ele quer ou
n�o continuar a digitar dados. No final, quando o usu�rio decidir parar, mostre
na tela:
a) Quantas idades foram digitadas
b) Qual � a m�dia entre as idades digitadas
c) Quantas pessoas tem 21 anos ou mais.*/


void main(){
	int idade = 0;
	int i = 1, mais21=0;
	char resp = 's';
	float somaTotal=0, mediaGeral=0;
	
	do {
		printf("Digite a idade da %i pessoa: ",i);
		scanf("%i",&idade);
		printf("Deseja lancar mais uma idade? [S/N] ");
		scanf(" %c",&resp);
		i++;
		
		if(idade >= 21){
			mais21++;
		}
		
		somaTotal = somaTotal + idade;
		
	} while(resp == 's' || resp == 'S');
	mediaGeral = somaTotal / (i - 1);
	printf("Idades digitadas: %i \n",i-1);
	printf("Media das idades digitadas: %.2f \n",mediaGeral);
	printf("Pessoas com 21+: %i \n",mais21);
}


