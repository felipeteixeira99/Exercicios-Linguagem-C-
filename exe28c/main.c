#include <stdio.h>
#include <stdlib.h>

/* 28) Fa�a um programa que leia a largura e o comprimento de um terreno
retangular, calculando e mostrando a sua �rea em m�. O programa tamb�m
devemostrar a classifica��o desse terreno, de acordo com a lista abaixo:
- Abaixo de 100m� = TERRENO POPULAR
- Entre 100m� e 500m� = TERRENO MASTER
- Acima de 500m� = TERRENO VIP */

void main(){
	float largura, comprimento,area;
	printf("Largura: ");
	scanf("%f",&largura);
	printf("Comprimento: ");
	scanf("%f",&comprimento);
	
	area = comprimento * largura;
	printf("%.2f \n",area);
	printf("\n");
	printf("Classificacao do Terreno \n");
	
	if(area < 100 ){
		printf("Terreno popular");
	}
	else{
		if((area >= 100) && (area < 500)){
		printf("Terreno Master \n");}
		
		else{
			if (area > 500){
				printf("Terreno VIP \n");
			}
		}
	}
	system("pause");
}
