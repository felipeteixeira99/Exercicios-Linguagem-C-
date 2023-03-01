#include <stdio.h>
#include <stdlib.h>

/* 4) Desenvolva um algoritmo em c que leia dois números inteiros e mostre o somatório
entre eles.
Ex:
Digite um valor: 8
Digite outro valor: 5
A soma entre 8 e 5 é igual a 13. */

<<<<<<< HEAD
int main() {
	int num1,num2;
=======
#include <stdio.h>

int main(int num1, int num2, int resultado) {
>>>>>>> origin/main
	printf("Digite o primeiro valor: ");
	scanf("%i",&num1);
	printf("Digite o segundo valor: ");
	scanf("%i",&num2);
	resultado = num1 + num2;
	printf("A soma entre %i e %i e igual a %i \n",num1,num2,resultado);
	system("pause");
	return 0;
<<<<<<< HEAD
		
}

=======
	
}
>>>>>>> origin/main
