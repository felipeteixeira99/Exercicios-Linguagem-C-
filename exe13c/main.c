#include <stdio.h>
#include <stdlib.h>

/* 13) Fa�a um algoritmo que leia o sal�rio de um funcion�rio, calcule e mostre o
seu novo sal�rio, com 15% de aumento */

void main(){
	float salarioAtual, aumento, salarioNovo;
	printf("Digite o salario atual: R$ ");
	scanf("%f",&salarioAtual);
	aumento = (salarioAtual * 15) / 100;
	salarioNovo = (salarioAtual + aumento);
	printf("O salario atual teve um reajuste de R$ %0.2f \n",aumento);
	printf("O novo salario e R$ %0.2f \n",salarioNovo);
	system("pause");
}
