#include <stdio.h>
#include <stdlib.h>

/* 15) Crie um programa que leia o número de dias trabalhados em um mês e mostre o
salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25
por hora trabalhada. */

void main(){
	int dias,h;
	float salario;
	printf("Quantidade de dias trabalhados: ");
	scanf("%i",&dias);
	h = dias * 8;
	salario = h * 25;
	printf("Salario a receber: R$ %0.2f \n",salario);
	system("pause");
}
