#include <stdio.h>
#include <stdlib.h>

/* 7) Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
sua terça parte.
Ex:
Digite um número: 3.5
O dobro de 3.5 é 7.0
A terça parte de 3.5 é 1.16666 */

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
