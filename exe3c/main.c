#include <stdio.h>
#include <stdlib.h>

/* 3) Crie um programa que leia o nome e o sal�rio de um funcion�rio, mostrando no
final uma mensagem.
Ex:
Nome do Funcion�rio: Maria do Carmo
Sal�rio: 1850,45
O funcion�rio Maria do Carmo tem um sal�rio de R$1850,45 em Junho. */

int main() {
	char nome[20];
	float dinheiro;
	printf("Nome do funcionario: ");
	scanf("%s",nome);
	printf("Salario do funcionario: ");
	scanf("%f",&dinheiro);
	printf("O funcionario %s, recebe um salario de R$%.2f \n",nome,dinheiro);
	system("pause");
	return 0;
}



