#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 32) [DESAFIO] Crie um jogo onde o computador vai sortear um número entre 1 e 5 o
jogador vai tentar descobrir qual foi o valor sorteado. */

void main(){
	int numeroAleatorio, jogada;
	
	srand(time(NULL));
	numeroAleatorio = rand() % 5 + 1; 
	printf("Numero Aleatorio Gerado: ** \n");
	
	printf(" \nTente adivinhar \n");
	printf("Qual foi o numero sorteado ? 1 - 5 \n");
	scanf("i%",jogada);
	
	if(jogada == numeroAleatorio){
		printf("Parabens...voce acertou ! \n");
	}
	else{
		printf("Voce Errou!...tente novemente \n");
	}
}
