#include <stdio.h>
#include <stdlib.h>

/* 50) Desenvolva um programa que fa�a o sorteio de 20 n�meros entre 0 e 10 e
mostre na tela:
a) Quais foram os n�meros sorteados
b) Quantos n�meros est�o acima de 5
c) Quantos n�meros s�o divis�veis por 3 */

void main(){
	int num[20];
	int i;
	int acima = 0, divisiveis = 0;
	
	srand(time(NULL));
	
	while(i < 20){
		num[i] = rand() % 11;
		i++;
	}
	
	printf("Numeros sorteados: ");
	i = 0;
	while(i < 20){
		printf("%d ",num[i]);
		if(num[i] > 5){
			acima++;
		}
		if(num[i] % 3 == 0){
			divisiveis++;	
		}
		i++;
	}
printf("\n");	
printf("Numeros acima de cinco: %i \n",acima);
printf("Numeros divisiveis por tres: %i \n",divisiveis);
}


