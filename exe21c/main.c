#include <stdio.h>
#include <stdlib.h>

/* 21) Faça um algoritmo que leia um determinado ano e mostre se ele é ou não
BISSEXTO. */

void main(){
	int ano;
	printf("Digite o ano que deseja verificar: ");
	scanf("%i",&ano);
	
	if (ano % 4 == 0){
		if (ano % 100 == 0){
			if (ano % 400 == 0){
				printf("Ano Bissexto => 366 Dias");
			}
			else{
				printf("NAO E BISSEXTO => 365 DIAS");
			}
		}
		else{
			printf("Ano Bissexto => 366 Dias");	
		}
	}
	else{
		printf("NAO E BISSEXTO => 365 DIAS");
	}
}
