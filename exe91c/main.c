#include <stdio.h>
#include <stdlib.h>

/* 91) Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses
valores para um procedimento Maior() que vai verificar qual deles é o maior e
mostrá-lo na tela. Caso os dois valores sejam iguais, mostrar uma mensagem
informando essa característica. */

int main() {
	int num1, num2;
	printf("Digite o valor de A: ");
	scanf("%i",&num1);
	printf("Digite o valor de B: ");
	scanf("%i",&num2);
	return(Maior(num1,num2));
}

int Maior(int a, int b){
	if(a > b){
		printf("Valor %i e o maior",a);
	}
	else if(a < b){
		printf("Valor %i e o maior",b);
	}
	else{
		printf("Os dois valores sao equivalentes!");
	}
	return 0;
}
