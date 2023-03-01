#include <stdio.h>
#include <stdlib.h>

/* 58) Faça um algoritmo que leia a idade de vários alunos de uma turma. O programa
vai parar quando for digitada a idade 999. No final, mostre quantos alunos
existem na turma e qual é a média de idade do grupo. */

void main(){
	int i=1, soma = 0, qtd = 0;
	int idade;
	float media;
	while(idade != 999){
		printf("Digite a idade do %i aluno: ",i);
		scanf("%i",&idade);
		if(idade == 999){
			break;
		}
		else{
			qtd++;
			soma = soma + idade;
			i++;	
		}
	}
	
	media = soma / qtd;
	
	printf("Voce encerrou o programa! \n");
	printf("Foram contabilizados %i alunos \n",qtd);
	printf("A media de idade desses alunos e: %.2f \n",media);
}
