#include <stdio.h>
#include <stdlib.h>

/* 11) Desenvolva uma lógica que leia os valores de A, B e C de uma equação do
segundo grau e mostre o valor de Delta. */

   //delta = b2 - 4(ac)
   // numero ao lado da letra = *
   
void main(){
	int a,b,c,delta;
	printf("Digite o valor de A: ");
	scanf("%i",&a);
	printf("Digite o valor de B: ");
	scanf("%i",&b);
	printf("Digite o valor de C: ");
	scanf("%i",&c);
	delta = (b*b) - (4 * a * c);
	printf("Valor de delta %i \n",delta);
}
