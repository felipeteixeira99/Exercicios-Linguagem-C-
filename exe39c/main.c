#include <stdio.h>
#include <stdlib.h>

/* 39) Faça um algoritmo que mostre na tela a seguinte contagem:
10 9 8 7 6 5 4 3 Acabou! */

void main(){
	int i = 11;
	while(i > 3){
		i--;
		printf(" %i ",i);
	}
	printf("Acabou !");
}
