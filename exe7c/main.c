#include <stdio.h>
#include <stdlib.h>

/* 7) Crie um algoritmo que leia um n�mero real e mostre na tela o seu dobro e a
sua ter�a parte.
Ex:
Digite um n�mero: 3.5
O dobro de 3.5 � 7.0
A ter�a parte de 3.5 � 1.16666 */

void main() {
	float num,terca,dobro;
	printf("Digite um numero: ");
	scanf("%f",&num);
	dobro = num * 2;
	terca = num / 3;
	printf("O dobro de %0.1f e %0.1f \n",num,dobro);
	printf("A terca parte de %0.1f e %f \n",num,terca);
	system("pause");
}
