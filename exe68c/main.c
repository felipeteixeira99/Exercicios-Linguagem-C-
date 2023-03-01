#include <stdio.h>
#include <stdlib.h>

/*68) Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura
“para”. No final, mostre na tela:
a) Quantas mulheres foram cadastradas
b) Quantos homens pesam mais de 100Kg
c) A média de peso entre as mulheres
d) O maior peso entre os homens */

void main(){
	int i,mulheres=0,homens100=0;
	float peso,somaF=0,mediaF,maior=0;
	char sexo;
	
	for(i = 1;i <= 2; i++){
		printf("Digite o peso da %i pessoa: ",i);
		scanf("%f",&peso);
		printf("Digite o sexo da %i pessoa: [M/F] ",i);
		scanf(" %c",&sexo);	
		
		if(sexo == 'f'){
			mulheres++;
			somaF = somaF + peso;
		}
		if(sexo == 'm'){
			if(peso > 100){
				homens100++;
			}
			if(peso >maior){
				maior = peso;
			}
		}
		
	}
	mediaF = (somaF / mulheres);
	printf("Mulheres: %i \n",mulheres);
	printf("Homens com mais de 100kg: %i \n",homens100);
	printf("Media de peso mulheres: %.2f \n",mediaF);
	printf("Maior peso entre os homens: %.2f \n",maior);
}
