#include <stdio.h>
#include <stdlib.h>

/* 48) Fa�a um programa que leia 7 n�meros inteiros e no final mostre o somat�rio
entre eles. */

void main(){
	int num, soma = 0;
	int i=1;
	while(i <= 7){
		printf("Digite o %i numero: ",i);
		scanf("%i",&num);
		soma = soma + num;
		i++;	
	}
	printf("\n A soma e: %i",soma);
}
