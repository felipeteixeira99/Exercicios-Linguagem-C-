#include <stdio.h>
#include <stdlib.h>

/* 65) Desenvolva um programa usando a estrutura �para� que mostre na tela a
seguinte contagem:
100 90 80 70 60 50 40 30 20 10 0 Acabou! */

void main(){
	int i;
	for(i = 100; i >= 0; i-=10){
		printf(" %i",i);
	}
	printf(" Acabou!");
}
