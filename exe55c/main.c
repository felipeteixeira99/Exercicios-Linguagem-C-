#include <stdio.h>
#include <stdlib.h>

/* 55) [DESAFIO] Vamos melhorar o jogo que fizemos no exercício 32. A partir de
agora, o computador vai sortear um número entre 1 e 10 e o jogador vai ter 4
tentativas para tentar acertar. */


void main(){
	int numeroAleatorio, jogada,tentativas=4;

	srand(time(NULL));
	numeroAleatorio = rand() % 10 + 1; 
	printf("Numero Aleatorio Gerado: ** \n");
	printf("Numero gerado: %i \n",numeroAleatorio);
	
	
	while(tentativas > 0){
		printf(" \nTente adivinhar \n");
		printf("Qual foi o numero sorteado ? 1 - 10 \n");
		scanf("%i",&jogada);

		if(jogada == numeroAleatorio){
			printf("Parabens...voce acertou ! \n");
			break;
			//tentativas++;
	}
		else{
			printf("Voce Errou!...tente novemente \n");
			if(jogada > numeroAleatorio){
				printf("Tente um numero menor! \n");
			}
			else{
				printf("Tente um numero maior! \n");
			}
			tentativas--;
		}	
	}
}
