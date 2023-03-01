#include <stdio.h>
#include <stdlib.h>

/* 92) Crie uma lógica que leia um número inteiro e passe para um procedimento
ParOuImpar() que vai verificar e mostrar na tela se o valor passado como
parâmetro é PAR ou ÍMPAR. */

int main() {
	int valor;
	printf("Digite um numero: ");
	scanf("%i",&valor);
	return ParImpar(valor);
}

int ParImpar(int a){
	if(a % 2 == 0){
		printf("O valor %i e um numero par!",a);
	}
	else{
		printf("O valor %i e um numero impar!",a);
	}
	return 0;
}
