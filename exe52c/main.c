#include <stdio.h>
#include <stdlib.h>

/* 52) Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final:
a) Qual é a média de idade do grupo
b) Quantas pessoas tem mais de 18 anos
c) Quantas pessoas tem menos de 5 anos
d) Qual foi a maior idade lida */

void main(){
	int i = 1;
	int idade, soma=0, mais18=0, menor5=0, maiorIdade=0;
	float mediaGeral;
	
	while(i <= 10){
		printf("Idade da %i pessoa: ",i);
		scanf("%i",&idade);
		soma = soma + idade;
		if(idade > 18){
			mais18++;
		}
		if(idade < 5){
			menor5++;
		}
		
		if(idade > maiorIdade){
			maiorIdade = idade;
		}
		i++;
	}
	mediaGeral = (soma / 10);
	printf("\n");
	printf("Media Geral: %.2f \n",mediaGeral);
	printf("Pessoas com mais de 18 anos: %i \n",mais18);
	printf("Pessoas com menos de 5 anos: %i \n",menor5);
	printf("A maior idade digitada foi: %i \n",maiorIdade);
	
}
