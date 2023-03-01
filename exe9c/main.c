#include <stdio.h>
#include <stdlib.h>

/* 9) Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$)
e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45. */

void main() {
	float dinheiro,dolar;
	printf("Digite a quantidade em R$: ");
	scanf("%f",&dinheiro);
	dolar = dinheiro / 5.21;
	printf("A quantidade em R$%0.2f equivale a U$%0.2f \n",dinheiro,dolar);
	system("pause");
}
