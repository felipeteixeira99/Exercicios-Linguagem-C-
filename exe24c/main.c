#include <stdio.h>
#include <stdlib.h>

/* 24) Faça um algoritmo que pergunte a distância que um passageiro deseja
percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km para
viagens até 200Km e R$0.45 para viagens mais longas. */

void main(){
	float km,valor;
	printf("Quantos quilometros deseja percorrer? ");
	scanf("%f",&km);
	
	if (km > 0 && km <= 200){
		valor = km * 0.50;
		printf("Valor da passagem: R$ %0.2f \n",valor);
	}
	else{
		valor = km * 0.45;
		printf("Valor da passagem: R$ %0.2f \n",valor);
	}
	
}
