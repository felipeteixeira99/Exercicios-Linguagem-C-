#include <stdio.h>
#include <stdlib.h>

/* 19) Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua
média e mostre na tela. No final, analise a média e mostre se o aluno teve ou
não um bom aproveitamento (se ficou acima da média 7.0). */

void main(){
	char nome[20];
	float n1, n2, media;
	
	printf("Nome do aluno: ");
	scanf("%s",nome);
	printf("==================== \n");
	
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	
	media = (n1 + n2) / 2;
	
	printf("Nome: %s \n",nome);
	printf("Media %.2f \n",media);
	
	if (media > 7){
		printf("Parabens, bom aproveitamento!");
	}
	else{
		printf("Se esforce mais!");
	}
}

