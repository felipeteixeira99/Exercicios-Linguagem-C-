#include <stdio.h>
#include <stdlib.h>

/* 36) Um programa de vida saud�vel quer dar pontos atividades f�sicas que podem
ser trocados por dinheiro. O sistema funciona assim:
- Cada hora de atividade f�sica no m�s vale pontos
- at� 10h de atividade no m�s: ganha 2 pontos por hora
- de 10h at� 20h de atividade no m�s: ganha 5 pontos por hora
- acima de 20h de atividade no m�s: ganha 10 pontos por hora
- A cada ponto ganho, o cliente fatura R$0,05 (5 centavos)
Fa�a um programa que leia quantas horas de atividade uma pessoa teve por m�s,
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
