#include <stdio.h>
#include <stdlib.h>

/* 44) Crie um algoritmo que leia o valor inicial da contagem, o valor final e o
incremento, mostrando em seguida todos os valores no intervalo:
Ex: Digite o primeiro Valor: 3
Digite o último Valor: 10
Digite o incremento: 2
Contagem: 3 5 7 9 Acabou! */

void main(){
	int i;
	int num,fim, incremento;
	
	printf("Inicio: ");
	scanf("%i",&num);
	printf("Fim: ");
	scanf("%i",&fim);
	printf("Incremento: ");
	scanf("%i",&incremento);
	

	
	while( num <= fim){
		printf(" %i",num);
		num = num + incremento;	
	}
	printf("...Acabou!");
}
