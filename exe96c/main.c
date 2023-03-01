#include <stdio.h>
#include <stdlib.h>

/* 96) Crie um programa que tenha uma função Media(), que vai receber as 2 notas de
um aluno e retornar a sua média para o programa principal.*/

float media(float a, float b);
int main(){
	float n1, n2, notas;
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	notas = media(n1,n2);
	printf("Media: %.2f",notas);	
	return 0;
}

float media(float a, float b){
	float soma = (a + b) / 2;
	return soma;
}



