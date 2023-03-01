#include <stdio.h>
#include <stdlib.h>

/* 25) [DESAFIO] Crie um programa que leia o tamanho de tr�s segmentos de reta.
Analise seus comprimentos e diga se � poss�vel formar um tri�ngulo com essas
retas. Matematicamente, para tr�s segmentos formarem um tri�ngulo, o comprimento
de cada lado deve ser menor que a soma dos outros dois. */

//A < B + C
//B < A + C
//C < A + B

//TRIANGULO ESCALENO: LADOS DIFERENTES
//ANGULOS N�O CONGRUENTES

//TRIANGULO ISOSCELES: DOIS LADOS IGUAIS
//POSSUI ANGULOS CONGRUENTES
// AB CONGRUENTE COM AC

//TRIANGULO EQUILATERO: TODOS OS TRES LADOS IGUAIS
//CADA ANGULO MEDE 60� TOTALIZANDO OS 180�
//OS TRES LADOS S�O CONGRUENTES

void main(){
	int a,b,c;
	printf("Valor de A: ");
	scanf("%i",&a);
	printf("Valor de B: ");
	scanf("%i",&b);
	printf("Valor de C: ");
	scanf("%i",&c);
	
	if (a < b + c && b < a + c && c < a + b){
		printf("Triangulo");
	}
	else{
		printf("Nao forma Triangulo");
	}	
}
