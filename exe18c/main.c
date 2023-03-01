#include <stdio.h>
#include <stdlib.h>

/* 18) Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade
dela e depois mostre se ela pode ou não votar. */

void main(){
	int idade,anoNascimento;
	
	printf("Ano de nascimento: ");
	scanf("%i",&anoNascimento);
	
	idade = 2023 - anoNascimento;
	
	if (idade >= 18){
		printf("Pode votar!");
	} 
	else{
		printf("Nao pode votar!");
	}
}
