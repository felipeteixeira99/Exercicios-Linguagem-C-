#include <stdio.h>
#include <stdlib.h>

/* 74) Crie um programa que preencha automaticamente (usando lógica, não apenas
atribuindo diretamente) um vetor numérico com 10 posições, conforme abaixo: 

5 3 5 3 5 3 5 3 5 3
0 1 2 3 4 5 6 7 8 9
*/

void main(){
	int vet[10];
	int i;
	
	/*for(i = 0; i < 5; i++){
		printf(" 5 3");
	}*/
	
	for(i = 0; i < 10; i++){
		if(i % 2 == 0){
			vet[i] = 5;
			printf("%i ",vet[i]);
		}
		else{
			vet[i] = 3;
			printf("%i ",vet[i]);
		}
	}
	

	printf("\n");
	for(i = 0; i < 10; i++){
		vet[i] = i;
		printf(" %i",vet[i]);
	}
}
