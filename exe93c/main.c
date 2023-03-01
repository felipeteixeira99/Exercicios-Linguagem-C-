#include <stdio.h>
#include <stdlib.h>

/* 93) Faça um programa que tenha um procedimento chamado Contador() que recebe
três valores como parâmetro: o início, o fim e o incremento de uma contagem. O
programa principal deve solicitar a digitação desses valores e passá-los ao
procedimento, que vai mostrar a contagem na tela. */

int main(){
	int inicio, fim, inc;
	printf("Inicio: ");
	scanf("%i",&inicio);
	printf("Fim: ");
	scanf("%i",&fim);
	printf("Incremento: ");
	scanf("%i",&inc);
	return(Contador(inicio,fim,inc));
}

int Contador(int ini, int fim, int incremento){
	int i;
	printf("Contando...\n");
	for(i = ini; i <= fim; i+=incremento){
		printf(" %i >> ",i);
	}
	printf("Fim!");
	return 0;
}
