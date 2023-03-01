#include <stdio.h>
#include <stdlib.h>

/* 17) Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse
80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba
o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida. */

void main(){
	float km, km_acima, multa;
	printf("Velocidade registrada: ");
	scanf("%f",&km);
	
	km_acima = km - 80;
	multa = km_acima * 5;
	
	if (km > 80){
		printf("Veiculo Multado \n");
		printf("Exedeu %0.0f Km(s) acima do permitido \n",km_acima);
		printf("Valor da multa: R$ %.2f \n",multa);
	}
	else{
		printf("Veiculo nao foi multado");
	}
	system("pause");
}
