#include <stdio.h>
#include <stdlib.h>

/* 3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no
final uma mensagem.
Ex:
Nome do Funcionário: Maria do Carmo
Salário: 1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho. */

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



