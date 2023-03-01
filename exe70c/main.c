#include <stdio.h>
#include <stdlib.h>

/* 70) [DESAFIO] Faça um programa que mostre os 10 primeiros elementos da Sequência
de Fibonacci:
1 1 2 3 5 8 13 21... */

void main(){
	int t1 = 0, t2 = 1;
	int t3, i;
	
	printf("0 1 ");
	for(i = 0; i <= 10; i++){
		printf("%i ",t3);
		t1 = t2;
		t2 = t3;
		t3 = t1 + t3;
	}
}
