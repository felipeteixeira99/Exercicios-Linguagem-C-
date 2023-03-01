#include <stdio.h>
#include <stdlib.h>

/* 23) Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos
para todos, mas especialmente para mulheres. Faça um programa que leia nome,
sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo
que:
- Homens ganham 5% de desconto
- Mulheres ganham 13% de desconto */

void main(){
	//int sexo;
	char nome[10];
	char sexo;
	float compra, desconto, novoPreco;
	printf("Nome: ");
	scanf("%s",nome);
	printf("Sexo M/F]:");
	scanf("%s",&sexo);
	printf("Valor total das compras: R$");
	scanf("%f",&compra);
	
	if(sexo == 'm' || sexo == 'M'){
		desconto = (compra * 5) / 100;
		novoPreco = (compra - desconto);
		printf("Parabens %s, voce ganhou um super desconto de R$ %.2f \n",nome,desconto);
		printf("O novo valor das suas compras e de R$ %0.2f \n",novoPreco);
	}
	if(sexo == 'f' || sexo == 'F'){
		desconto = (compra * 13) / 100;
		novoPreco = (compra - desconto);
		printf("Feliz dia da Mulher! \n");
		printf("Parabens %s, voce ganhou um super desconto de R$ %.2f \n",nome,desconto);
		printf("O novo valor das suas compras e de R$ %0.2f \n",novoPreco);
}	
}

