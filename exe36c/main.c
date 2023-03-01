#include <stdio.h>
#include <stdlib.h>

/* 36) Um programa de vida saudável quer dar pontos atividades físicas que podem
ser trocados por dinheiro. O sistema funciona assim:
- Cada hora de atividade física no mês vale pontos
- até 10h de atividade no mês: ganha 2 pontos por hora
- de 10h até 20h de atividade no mês: ganha 5 pontos por hora
- acima de 20h de atividade no mês: ganha 10 pontos por hora
- A cada ponto ganho, o cliente fatura R$0,05 (5 centavos)
Faça um programa que leia quantas horas de atividade uma pessoa teve por mês,
calcule e mostre quantos pontos ela teve e quanto dinheiro ela conseguiu ganhar. */

void main(){
	float horas,valor;
	int pontos, pontosTot;
	printf("Quantidade de horas de ativididade fisica: ");
	scanf("%f",&horas);
	
	system("cls");
	
	if(horas <= 10){
		pontos = 2;
		pontosTot = horas * pontos;
	}
	else{
		if((horas > 10) && (horas <= 20)){
		pontos = 5;
		pontosTot = horas * pontos;}
		
		else{
			if(horas > 20){
			pontos = 10;
			pontosTot = horas * pontos;}
		}	
	}
	
	valor = pontosTot * 0.05;
		
	printf("Voce possui %.2fh de atividade fisica \n",horas);
	printf("Voce possui %i pontos para serem trocados\n", pontosTot);
	printf("Voce vai receber  R$%.2f pelos os pontos de atividade",valor);
		
}
