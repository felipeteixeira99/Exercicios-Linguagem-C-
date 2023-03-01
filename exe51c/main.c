#include <stdio.h>
#include <stdlib.h>

/* 51) Faça um aplicativo que leia o preço de 8 produtos. No final, mostre na tela
qual foi o maior e qual foi o menor preço digitados. */


void main(){
	int i=2;
	float preco, maior, menor;

	printf("Digite o preco do 1 produto: R$ ");
	scanf("%f",&preco);
	
	maior = menor = preco;
	
	while(i <= 8){
		printf("Digite o preco do %i produto: R$ ",i);
		scanf("%f",&preco);
		
		if(preco > maior){
			maior = preco;
		}
		if(preco < menor){
			menor = preco;
		}
		i++;
	}
	printf("\n");
	printf("O maior preco foi: R$ %.2f \n",maior);	
	printf("O menor preco foi: R$ %.2f \n",menor);
}
