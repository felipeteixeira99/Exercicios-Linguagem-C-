#include <stdio.h>
#include <stdlib.h>

/* 92) Crie uma l�gica que leia um n�mero inteiro e passe para um procedimento
ParOuImpar() que vai verificar e mostrar na tela se o valor passado como
par�metro � PAR ou �MPAR. */

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
