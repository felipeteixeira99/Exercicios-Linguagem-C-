#include <stdio.h>
#include <stdlib.h>

/*  26) Escreva um algoritmo que leia dois n�meros inteiros e compare-os, mostrando
na tela uma das mensagens abaixo:
- O primeiro valor � o maior
- O segundo valor � o maior
- N�o existe valor maior, os dois s�o iguais*/

void main(){
	int valor1, valor2;
	printf("Primeiro valor: ");
	scanf("%i",&valor1);
	printf("Segundo valor: ");
	scanf("%i",&valor2);
	
	if (valor1 > valor2){
		printf("O primeiro valor %i e maior que o segundo valor %i \n",valor1,valor2);
	}
	else{
		printf("O segundo valor %i e maior que o primeiro valor %i \n",valor2,valor1);
	}
	system("pause");
}
