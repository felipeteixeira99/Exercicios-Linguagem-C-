#include <stdio.h>
#include <stdlib.h>

/* 56) Crie um programa que leia vários números pelo teclado e mostre no final o
somatório entre eles.
Obs: O programa será interrompido quando o número 1111 for digitado */

void main(){
	int num = 0;
	int i = 1, soma = 0;
	
	while(num != 1111){
		printf("Digite o %i numero: ",i);
		scanf("%i",&num);
		if(num == 1111){
			break;
		}
		else{
			soma = soma + num;	
		}
		
		i++;
	}
	printf("Voce finalizou o programa! \n");
	printf("A soma e %i: \n",soma);
}
