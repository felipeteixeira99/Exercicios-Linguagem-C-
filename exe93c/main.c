#include <stdio.h>
#include <stdlib.h>

/* 93) Fa�a um programa que tenha um procedimento chamado Contador() que recebe
tr�s valores como par�metro: o in�cio, o fim e o incremento de uma contagem. O
programa principal deve solicitar a digita��o desses valores e pass�-los ao
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
