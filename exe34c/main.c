#include <stdio.h>
#include <stdlib.h>

/* 34) O Índice de Massa Corpórea (IMC) é um valor calculado baseado na altura e no
peso de uma pessoa. De acordo com o valor do IMC, podemos classificar o
indivíduo dentro de certas faixas.
- abaixo de 18.5: Abaixo do peso
- entre 18.5 e 25: Peso ideal
- entre 25 e 30: Sobrepeso
- entre 30 e 40: Obesidade
- acima de 40: Obseidade mórbida */

void main(){
	float peso, altura, imc;
	printf("Peso em Kg: ");
	scanf("%f",&peso);
	printf("Altura em mt: ");
	scanf("%f",&altura);
	
	imc = peso / (altura * altura);
	printf("O seu IMC e: %.2f \n",imc);
	
	if(imc < 18.5){
		printf("Abaixo do peso");
	}
	else{
		if((imc >= 18.5) && (imc < 25)){
			printf("Peso Ideal");
		}
		else{
			if((imc >= 25) && (imc < 30)){
				printf("Sobrepeso");
			}
			else{
				if((imc >= 30) && (imc < 40)){
					printf("Obesidade");
				}
				else{
					printf("Obesidade Morbida");
				}
			}
		}
	}
	system("pause");
}
