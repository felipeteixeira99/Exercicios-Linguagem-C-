#include <stdio.h>
#include <stdlib.h>

/* 6) Fa�a um programa que leia um n�mero inteiro e mostre o seu antecessor e seu
sucessor.
Ex:
Digite um n�mero: 9
O antecessor de 9 � 8
O sucessor de 9 � 10 */

void main() {
	int num, antecessor, sucessor;
	printf("Digite um numero: ");
	scanf("%i",&num);
	antecessor = num - 1;
	sucessor = num + 1;
	printf("O antecessor de %i e %i \n",num,antecessor);
	printf("O sucessor de %i e %i \n",num,sucessor);
}
