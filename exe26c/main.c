#include <stdio.h>
#include <stdlib.h>

/*  26) Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando
na tela uma das mensagens abaixo:
- O primeiro valor é o maior
- O segundo valor é o maior
- Não existe valor maior, os dois são iguais*/

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
