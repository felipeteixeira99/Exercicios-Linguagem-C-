#include <stdio.h>
#include <stdlib.h>

/* 95) Refa�a o exerc�cio 90, s� que agora em forma de fun��o Somador(), que vai
receber dois par�metros e vai retornar o resultado da soma entre eles para o
programa principal. */

int main(){
	int num1, num2, soma;
	printf("Digite o primeiro valor: ");
	scanf("%i",&num1);
	printf("Digite o segundo valor: ");
	scanf("%i",&num2);
	soma = (somar(num1,num2));
	printf("%i",soma);
}

int somar(int a,int b){
	return a + b;
}

