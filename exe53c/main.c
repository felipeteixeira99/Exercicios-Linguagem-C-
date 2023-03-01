#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*53) Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final:
a) Quantos homens foram cadastrados
b) Quantas mulheres foram cadastradas
c) A média de idade do grupo
d) A média de idade dos homens
e) Quantas mulheres tem mais de 20 anos  */

void main(){
	char sexo[1];
	int idade = 0, i = 0, homens = 0, mulheres = 0;
	int mais20 = 0;
	float soma = 0, somaHomens = 0;
	float mediaGeral, mediaHomens;
	
	while(i < 5){
		printf("Digite o sexo: [M/F] ");
		scanf("%s",sexo);
		printf("Idade: ");
		scanf("%i",&idade);
		
		if (strcmp(sexo,"m") == 0 || strcmp(sexo, "M") == 0){
			homens++;
			somaHomens = somaHomens + idade;
		}
	
		if (strcmp(sexo, "f") == 0 || strcmp(sexo, "F") == 0){
			if(idade > 20){
				mais20++;
			}
			mulheres++;
		}
		
		soma = soma + idade;
		
		i++;
		
	}
	system("cls");
	mediaGeral = soma / 5;
	mediaHomens = somaHomens / homens;
	printf("\n");
	printf("Homens Cadastrados: %i \n",homens);
	printf("Mulheres Cadastrados: %i \n",mulheres);
	printf("Media das Idades: %.2f \n",mediaGeral);
	printf("Media Idade de Homens: %.2f \n",mediaHomens);
	printf("Mulheres com mais de 20 anos: %i \n",mais20);
	system("pause");
}
