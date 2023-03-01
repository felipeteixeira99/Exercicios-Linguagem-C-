#include <stdio.h>
#include <stdlib.h>

/* 10) Faça um algoritmo que leia a largura e altura de uma parede, calcule e
mostre a área a ser pintada e a quantidade de tinta necessária para o serviço,
sabendo que cada litro de tinta pinta uma área de 2metros quadrados. */

void main(){
	float altura, largura, area, tinta;
	printf("ALTURA EM METROS: ");
	scanf("%f",&altura);
	printf("LARGURA EM METROS: ");
	scanf("%f",&largura);
	area = altura * largura;
	tinta = area / 2;
	printf("AREA A SER PINTADA %0.2f m2 \n",area);
	printf("QUANTIDADE EM TINTA %0.2flt \n",tinta);
	system("pause");
}
