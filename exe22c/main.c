#include <stdio.h>
#include <stdlib.h>

/* 22) Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua
situação em relação ao alistamento militar.
- Se estiver antes dos 18 anos, mostre em quantos anos faltam para o
alistamento.
- Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do
alistamento. */

void main(){
	int anoNascimento, idade, tempo;
	printf("Ano nascimento: ");
	scanf("%i",&anoNascimento);
	
	idade = 2023 - anoNascimento;
	
	if (idade >= 18){
		printf("Idade: %i anos \n");
		printf("Situacao Militar: Apto ao alistamento \n");
		if (idade > 18){
			tempo = idade - 18;
			printf("Anos em atraso: %i",tempo);
		}
	}
	if (idade < 18){
		printf("Idade: %i anos \n");
		printf("Situacao Militar: Inapto ao alistamento \n");
		tempo = 18 - idade;
		printf("Restam: %i ano(s) para o seu alistamento \n",tempo);
	}
	
}
