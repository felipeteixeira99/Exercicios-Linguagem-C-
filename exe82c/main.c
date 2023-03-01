#include <stdio.h>
#include <stdlib.h>

/* 82) Faça um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em
um vetor. No final, mostre:
a) Qual é a média da turma
b) Quantos alunos estão acima da média da turma
c) Qual foi a maior nota digitada
d) Em que posições a maior nota aparece */

void main(){
	float nota[10],mediaTurma, maiorNota=0;
	int i, acimaMedia=0;
	
	for(i=0; i < 10; i++){
		printf("Digite a %i nota: ",i+1);
		scanf("%f",&nota[i]);
		if(nota[i] > maiorNota){
			maiorNota = nota[i];
		}
		mediaTurma = mediaTurma + nota[i];
	}
	
	system("cls");
	
	mediaTurma = mediaTurma / i;
	printf("Media da Turma: %.2f \n",mediaTurma);
	
	for(i=0; i < 10; i++){
		if(nota[i] > mediaTurma){
			acimaMedia++;
		}
	}
	printf("Acima da media da Turma: %i \n",acimaMedia);
	printf("A maior nota digitada foi: %.2f \n",maiorNota);
	
	for(i=0; i < 10; i++){
		if(nota[i] >= maiorNota){
			printf("Maior nota na posicao [%i] Nota [%.2f] \n",i,nota[i]);
		}
	}	
}
