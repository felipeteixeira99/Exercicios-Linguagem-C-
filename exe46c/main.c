#include <stdio.h>
#include <stdlib.h>

/* 46) Crie um programa que calcule e mostre na tela o resultado da soma entre 6 +
8 + 10 + 12 + 14 + ... + 98 + 100. */

void main(){
	int soma,i = 6;
	while(i < 101){
		printf(" %i",i);
		soma = soma + i;
		i +=2;
	}
	printf("\nA soma e %i",soma);
	
}
