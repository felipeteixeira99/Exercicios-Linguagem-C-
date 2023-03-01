#include <stdio.h>
#include <stdlib.h>

/* 98) Crie um programa que tenha uma função SuperSomador(), que vai receber dois
números como parâmetro e depois vai retornar a soma de todos os valores no
intervalo entre os valores recebidos.
Ex:
SuperSomador(1, 6) vai somar 1 + 2 + 3 + 4 + 5 + 6 e vai retornar 21
SuperSomador(15, 19) vai somar 15 + 16 + 17 + 18 + 19 e vai retornar 85 */



int main(){
	int valor1, valor2, tot;
	printf("Digite o inicio: ");
	scanf("%i",&valor1);
	printf("Digite o fim: ");
	scanf("%i",&valor2);
	tot = Contador(valor1, valor2);
	printf("Soma: %i",tot);
	return 0;	
}

int Contador(int a, int b){
	system("cls");
	int i, soma=0;
	printf("Contando \n");
	for(i = a; i <= b; i++){
		printf(" %i ",i);
		soma = soma + i;
	}
	return soma;
}
