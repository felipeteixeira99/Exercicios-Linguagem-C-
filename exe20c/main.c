#include <stdio.h>
#include <stdlib.h>

/* 20) Desenvolva um programa que leia um n�mero inteiro e mostre se ele � PAR ou
�MPAR. */

void main(){
	int num;
	printf("Digite um numero: ");
	scanf("%i",&num);
	
	if(num % 2 == 0){
		printf("Numero Par!");
	}
	else{
		printf("Numero Impar!");	
	}
}
