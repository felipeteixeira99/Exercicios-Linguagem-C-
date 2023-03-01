#include <stdio.h>
#include <stdlib.h>

/* 54) Desenvolva um aplicativo que leia o peso e a altura de 7 pessoas, mostrando
no final:
a) Qual foi a média de altura do grupo
b) Quantas pessoas pesam mais de 90Kg
c) Quantas pessoas que pesam menos de 50Kg tem menos de 1.60m
d) Quantas pessoas que medem mais de 1.90m pesam mais de 100Kg. */

void main(){
	float peso, soma = 0, mediaAltura, altura;
	int i = 0, mais90=0, menos160=0, mais100=0;
	
	while(i < 7){
		printf("Digite o peso KG: ");
		scanf("%f",&peso);
		printf("Digite a altura em cm: ");
		scanf("%f",&altura);
		
		if(peso > 90){
			mais90++;
		}
		
		if(peso < 50){
			if(altura < 1.60){
				menos160++;
			}
		}
		
		if(altura > 1.90){
			if(peso > 100){
				mais100++;
			}
		}
		
		soma = soma + altura;
		
		i++;
	}
	
	mediaAltura = soma / 7;
	printf("\n");
	printf("Media de Altura: %.2f \n",mediaAltura);
	printf("Pessoas com mais de 90kg: %i\n",mais90);
	printf("Pessoas com menos de 1.60: %i \n",menos160);
	printf("Pessoas com mais de 100kg: %i \n",mais100);
}
