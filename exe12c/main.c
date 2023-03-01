#include <stdio.h>
#include <stdlib.h>

/* 12) Crie um programa que leia o preço de um produto, calcule e mostre o seu
PREÇO PROMOCIONAL, com 5% de desconto.*/

void main(){
	float preco, desconto, precoNovo;
	printf("Digite o valor normal do produto: R$ ");
	scanf("%f",&preco);
	desconto = (preco * 5) / 100;
	precoNovo = preco - desconto;
	printf("O desconto obtido foi de R$ %0.2f \n",desconto);
	printf("O novo preco e R$ %0.2f \n",precoNovo);
}

