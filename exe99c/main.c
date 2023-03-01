#include <stdio.h>
#include <stdlib.h>

/* 99) Faça um programa que possua uma função chamada Potencia(), que vai receber
dois parâmetros numéricos (base e expoente) e vai calcular o resultado da
exponenciação.
Ex: Potencia(5,2) vai calcular 52 = 25 */

int main(){
	int base, expoente,res;
	printf("Digite a base: ");
	scanf("%i",&base);
	printf("Digite o expoente: ");
	scanf("%i",&expoente);
	res = (Potencia(base,expoente));
	printf("%i",res);
	return 0;
}

int Potencia(int b, int exp){
	int resultado = 1;
	int cont=0;
	while(cont < exp){
		resultado = resultado * b;
		cont++;
	}
	return resultado;
}
