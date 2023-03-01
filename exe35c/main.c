#include <stdio.h>
#include <stdlib.h>

/* 35) Uma empresa de aluguel de carros precisa cobrar pelos seus serviços. O
aluguel de um carro custa R$90 por dia para carro popular e R$150 por dia para
carro de luxo. Além disso, o cliente paga por Km percorrido. Faça um programa
que leia o tipo de carro alugado (popular ou luxo), quantos dias de aluguel e
quantos Km foram percorridos. No final mostre o preço a ser pago de acordo com a
tabela a seguir:


- Carros populares (aluguel de R$90 por dia)
- Até 100Km percorridos: R$0,20 por Km
- Acima de 100Km percorridos: R$0,10 por Km


- Carros de luxo (aluguel de R$150 por dia)
- Até 200Km percorridos: R$0,30 por Km
- Acima de 200Km percorridos: R$0,25 por Km */

void main(){
	int diaria;
	int categoria, dias;
	float kmTotal,pagamento,km;
	
	
	printf("Categoria do veiculo: 1- Popular, 2 - Luxo: ");
	scanf("%i",&categoria);
	printf("Dias Locados: ");
	scanf("%i",&dias);
	printf("KM Percorrido: ");
	scanf("%f",&km);
	
	if((categoria == 1) && (km <= 100)){
		//diaria = 90;
		kmTotal = km * 0.20;
		pagamento = kmTotal + (dias * 90);
		printf("Valor total a ser pago: R$ %.2f \n",pagamento);
	}
	else{
		if((categoria == 1) && (km > 100)){
		kmTotal = km * 0.10;
		pagamento = kmTotal + (dias * 90);
		printf("Valor total a ser pago: R$ %.2f \n",pagamento);
	}
		else{
			if((categoria == 2) && (km <= 100)){
			kmTotal = km * 0.30;
			pagamento = kmTotal + (dias * 150);
			printf("Valor total a ser pago: R$ %.2f \n",pagamento);	
		}
			else{
				if((categoria == 2) && (km > 100)){
				kmTotal = km * 0.25;
				pagamento = kmTotal + (dias * 150);
				printf("Valor total a ser pago: R$ %.2f \n",pagamento);	
			}		
	}	}		
}
}
