#include <stdio.h>
#include <stdlib.h>

/* 49) Crie um programa que leia 6 n�meros inteiros e no final mostre quantos deles
s�o pares e quantos s�o �mpares.*/

void main(){
	int i = 1, num, par = 0;
	while(i <= 6){
		printf("Digite o %i numero: ",i);
		scanf("%i",&num);
		
		if(num % 2 == 0){
			par = par + 1;
		}
		
		i++;	
	}
	printf("Numeros pares: %i \n",par);
}
