#include <stdio.h>
#include <stdlib.h>

/* 38) Escreva um programa que mostre na tela a seguinte contagem:
6 7 8 9 10 11 Acabou! */

void main(){
	int i = 5;
	while(i < 11){
		i++;
		printf(" %i ",i);
	}
	printf("Acabou!");
}
