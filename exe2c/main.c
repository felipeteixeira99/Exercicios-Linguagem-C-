#include <stdio.h>

/*2) Fa�a um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:
Ex:
Qual � o seu nome? Jo�o da Silva
Ol� Jo�o da Silva, � um prazer te conhecer!*/

int main() {
	char nome[20];
	printf("Qual e o seu nome ? " );
	scanf("%s",nome,"\n");
	printf("Seja bem vindo %s, E um prazer te conhecer! \n",nome);
	
	
	system("pause");
	return 0;
}
