#include <stdio.h>
#include <stdlib.h>

/* 31) [DESAFIO] Crie um jogo de JoKenPo (Pedra-Papel-Tesoura) */

void main(){
	int jogador1, jogador2;
	
	printf("=====================================");
	printf(" \nQual sua jogada? \n ");
	printf("1 - Pedra | 2 - Papel | 3 - Tesoura \n");
	printf("===================================== \n");
	printf("Jogador 1: ");
	scanf("%i",&jogador1);
	printf("Jogador 2: ");
	scanf("%i",&jogador2);
	
	if(jogador1 == 1 && jogador2 == 3){
		printf("Pedra ganha Tesoura! \n");
		printf("Jogador 1 ganhou! \n");
	}
	
	else if(jogador1 == 2 && jogador2 == 1){
		printf("Papel ganha Pedra! \n");
		printf("Jogador 1 ganhou! \n");
	}
	else if(jogador1 == 3 && jogador2 == 2){
		printf("Tesoura vence Papel! \n");
		printf("Jogador 1 ganhou! \n");
	}
	else if(jogador2 == 1 && jogador1 == 3){
		printf("Pedra ganha Tesoura! \n");
		printf("Jogador 2 ganhou! \n");
	}
	else if(jogador2 == 2 && jogador1 == 1){
		printf("Papel ganha Pedra! \n");
		printf("Jogador 2 ganhou! \n");
	}
	else if(jogador2 == 3 && jogador1 == 2){
		printf("Tesoura vence Papel! \n");
		printf("Jogador 2 ganhou! \n");
	}
	else{
		printf("Empate \n");
	}	
}
