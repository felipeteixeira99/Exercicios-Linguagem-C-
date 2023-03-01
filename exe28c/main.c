#include <stdio.h>
#include <stdlib.h>

/* 28) Faça um programa que leia a largura e o comprimento de um terreno
retangular, calculando e mostrando a sua área em m². O programa também
devemostrar a classificação desse terreno, de acordo com a lista abaixo:
- Abaixo de 100m² = TERRENO POPULAR
- Entre 100m² e 500m² = TERRENO MASTER
- Acima de 500m² = TERRENO VIP */

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
