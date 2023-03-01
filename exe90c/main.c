#include <stdio.h>
#include <stdlib.h>

/* 90) Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses
valores para um procedimento Somador() que vai calcular e mostrar a soma entre
eles. */

int main(){
	int num1, num2;
	printf("Digite o primeiro valor: ");
	scanf("%i",&num1);
	printf("Digite o segundo valor: ");
	scanf("%i",&num2);
	printf("%i \n",somar(num1,num2));
	return;
}

int somar(int a,int b){
	return a + b;
}


