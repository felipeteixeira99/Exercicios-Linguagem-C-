#include <stdio.h>
#include <stdlib.h>

/* 43) Desenvolva um algoritmo que mostre uma contagem regressiva de 30 até 1,
marcando os números que forem divisíveis por 4, exatamente como mostrado abaixo:
30 29 [28] 27 26 25 [24] 23 22 21 [20] 19 18 17 [16]...*/

void main(){
	int num=1, i=30;
	while(i > num){
		i--;
		if( i % 4 == 0){
			printf(" [%i]",i);
		}
		else{
			printf(" %i",i);
		}
	}
	printf("...Acabou!");
}
