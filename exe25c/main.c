#include <stdio.h>
#include <stdlib.h>

/* 25) [DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta.
Analise seus comprimentos e diga se é possível formar um triângulo com essas
retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento
de cada lado deve ser menor que a soma dos outros dois. */

//A < B + C
//B < A + C
//C < A + B

//TRIANGULO ESCALENO: LADOS DIFERENTES
//ANGULOS NÃO CONGRUENTES

//TRIANGULO ISOSCELES: DOIS LADOS IGUAIS
//POSSUI ANGULOS CONGRUENTES
// AB CONGRUENTE COM AC

//TRIANGULO EQUILATERO: TODOS OS TRES LADOS IGUAIS
//CADA ANGULO MEDE 60° TOTALIZANDO OS 180°
//OS TRES LADOS SÃO CONGRUENTES

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
