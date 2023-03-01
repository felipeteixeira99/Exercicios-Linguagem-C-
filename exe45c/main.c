#include <stdio.h>
#include <stdlib.h>

/* 45) O programa acima vai ter um problema quando digitarmos o primeiro valor
maior que o último. Resolva esse problema com um código que funcione em qualquer
situação. */

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
