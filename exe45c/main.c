#include <stdio.h>
#include <stdlib.h>

/* 45) O programa acima vai ter um problema quando digitarmos o primeiro valor
maior que o �ltimo. Resolva esse problema com um c�digo que funcione em qualquer
situa��o. */

void main(){
	int i;
	int num,fim, incremento;
	
	printf("Inicio: ");
	scanf("%i",&num);
	printf("Fim: ");
	scanf("%i",&fim);
	printf("Incremento: ");
	scanf("%i",&incremento);
	
	if(num > fim){
		while( num >= fim){
		printf(" %i",num);
		num = num - incremento;	}	
	}
	
	else{
		while( num <= fim){
		printf(" %i",num);
		num = num + incremento;	
	}
	}
	printf("...Acabou!");
}
