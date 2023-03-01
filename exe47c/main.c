#include <stdio.h>
#include <stdlib.h>

/* 47) Desenvolva um aplicativo que mostre na tela o resultado da expressão 500 +
450 + 400 + 350 + 300 + ... + 50 + 0 */

void main(){
	int i = 500;
	int soma = 0;
	while(i > 0){
		printf(" %i",i);
		soma = soma + i;
		i -= 50; 	 
	}
	printf("\n A soma e: %i",soma);
}
