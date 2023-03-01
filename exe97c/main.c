#include <stdio.h>
#include <stdlib.h>

/* 97) Refaça o exercício 91, só que agora em forma de função Maior(), mas faça uma
adaptação que vai receber TRÊS números como parâmetro e vai retornar qual foi o
maior entre eles. */
int Maior(int a, int b, int c);
int main() {
	int num1, num2, num3,master;
	printf("Digite o valor de A: ");
	scanf("%i",&num1);
	printf("Digite o valor de B: ");
	scanf("%i",&num2);
	printf("Digite o valor de C: ");
	scanf("%i",&num3);
	master = (Maior(num1,num2,num3));
	
	if(master > 0){
		printf("O maior numero: %i",master);	
	}
	else{
		printf("Não Existe Maior Valor!");
	}
}

int Maior(int a, int b, int c){
	int maior = 0;
	if(a > b && a > c){
		maior = a;
	}
	else if(b > a && b > c){
		maior = b;
	}
	else if(c > a && c > b){
		maior = c;
	}
	return maior;
}
