#include <stdio.h>
#include <stdlib.h>

/* r75) Crie um programa que preencha automaticamente (usando lógica, não apenas
atribuindo diretamente) um vetor numérico com 15 posições com os primeiros
elementos da sequência de Fibonacci:
1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 */

void main(){
	int t1 = 0, t2 = 1, t3, i, vet[15];
	
	printf("%i %i",t1,t2);
	
	for(i = 0; i < 15; i++){
		t3 = (t1 + t2);
		t1 = t2;
		t2 = t3;
		vet[i] = t3;
		printf(" %i",vet[i]);
	}
	printf("\n");
	for(i = 0; i < 16; i++){
		vet[i] = i;
		printf("%i ",vet[i]);
	}
}
