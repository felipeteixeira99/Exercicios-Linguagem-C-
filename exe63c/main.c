#include <stdio.h>
#include <stdlib.h>

/* 63) Crie um programa usando a estrutura �fa�a enquanto� que leia v�rios n�meros.
A cada la�o, pergunte se o usu�rio quer continuar ou n�o. No final, mostre na
tela:
a) O somat�rio entre todos os valores
b) Qual foi o menor valor digitado
c) A m�dia entre todos os valores
d) Quantos valores s�o pares */

void main(){
	char resp = 's';
	int num, soma=0, i=0, vpar=0;
	int menorValor = 10000000;
	float somaM=0, media=0;
	
	do{
		printf("Digite o numero: ");
		scanf("%i",&num);
		
		printf("Deseja adicionar mais valores? [S/N] ");
		scanf(" %c",&resp);
		
		soma = soma + num;
		if(num < menorValor){
			menorValor = num;
		}
		
		if(num % 2 == 0){
			vpar++;
		}
		
		somaM = somaM + num;
		
		i++;
	}while(resp == 's' || resp == 'S');
	
	media = somaM / i;
	
	printf("A soma dos valores: %i \n",soma); 
	printf("Menor valor digitado: %i \n",menorValor);
	printf("A media dos valores e: %.2f \n",media);
	printf("Valores pares: %i \n",vpar);
	
}
