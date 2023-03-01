#include <stdio.h>
#include <stdlib.h>

/* 20) Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou
ÍMPAR. */

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
