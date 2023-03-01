#include <stdio.h>
#include <stdlib.h>

/* 69) [DESAFIO] Desenvolva um programa que leia o primeiro termo e a razão de uma
PA (Progressão Aritmética), mostrando na tela os 10 primeiros elementos da PA e
a soma entre todos os valores da sequência. */

void main(){
	int i, termo, razao, decimo, soma = 0;
	printf("Digite o primeiro termo: ");
	scanf("%i",&termo);
	printf("Digite a razao: ");
	scanf("%i",&razao);
	decimo = termo + (10 - 1) * razao;
	
	for(i = termo; i <= decimo; i+=razao){
		printf("%i -> ",termo);
		soma = soma + termo;
     	termo = termo + razao;
	}
	printf("Acabou!");
}
