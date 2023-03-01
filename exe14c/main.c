#include <stdio.h>
#include <stdlib.h>

/*14) A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva
um programa que pergunte a quantidade de Km percorridos por um carro alugado e a
quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar,
sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado. */

void main(){
	float km,diaria,kmValor, total;
	int dias;

	printf("Dias locados: ");
	scanf("%i",&dias);
	printf("Km rodado: ");
	scanf("%f",&km);
	
	diaria = dias * 90;
	kmValor = km * 0.20;
	total = diaria + kmValor;
	printf("Valor das diarias: R$ %0.2f \n",diaria);
	printf("Valor quilometragem: R$ %0.2f \n",kmValor);
	printf("Valor total da locacao: R$ %0.2f \n",total);
}
