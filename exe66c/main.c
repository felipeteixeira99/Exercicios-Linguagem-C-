#include <stdio.h>
#include <stdlib.h>

/* 66) Escreva um programa que leia um número qualquer e mostre a tabuada desse
número, usando a estrutura “para”.
Ex: Digite um valor: 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15 ... */

void main(){
	int num, i, produto=1;
	printf("Digite o numero que deseja ver a tabuada: ");
	scanf("%i",&num);
	
	for(i=1; i <= 10; i++){
		produto = (num * i);
		printf("%i x %i = %i \n",num,i,produto);	
	}
}
