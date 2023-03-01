#include <stdio.h>
#include <stdlib.h>

/* 67) Faça um programa usando a estrutura “para” que leia um número inteiro
positivo e mostre na tela uma contagem de 0 até o valor digitado:
Ex: Digite um valor: 9
Contagem: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, FIM! */

void main(){
	int num, i;
	printf("Digite um numero: ");
	scanf("%i",&num);
	
	for(i = 0; i <= num; i++){
		printf("%i, ",i);
	}
	printf("Acabou!");
}
