#include <stdio.h>
#include <stdlib.h>

/* 16) [DESAFIO] Escreva um programa para calcular a redução do tempo de vida de um
fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele
já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule
quantos dias de vida um fumante perderá e exiba o total em dias. */


void main(){
	int cigarros, anos;
	int dias_perdidos;
	float meses;
	printf("Cigarros fumados por dia: ");
	scanf("%d",&cigarros);
	printf("Quantos anos e fumante: ");
	scanf("%d",&anos);

	//calcula principal
	dias_perdidos = (anos * 365) * (cigarros * 10) / 1440;
	printf("Dias perdidos: %i \n",dias_perdidos);
	
	//meses perdidos
	meses = (anos * 365) * (cigarros * 10) / 43800;
	printf("Meses perdidos: %.1f \n",meses);
	system("pause");
}


