#include <stdio.h>
#include <stdlib.h>

/* 94) [DESAFIO] Desenvolva um aplicativo que tenha um procedimento chamado
Fibonacci() que recebe um único valor inteiro como parâmetro, indicando quantos
termos da sequência serão mostrados na tela. O seu procedimento deve receber
esse valor e mostrar a quantidade de elementos solicitados.
Obs: Use os exercícios 70 e 75 para te ajudar na solução
Ex:
Fibonacci(5) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> FIM
Fibonacci(9) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> 8 >> 13 >> 21 >> 34 >> FIM */

int main(){
	int num;
	printf("Digite um numero: ");
	scanf("%i",&num);
	return(Fibonacci(num));
}

int Fibonacci(int valor){
	system("cls");
	int t1 = 0, t2 = 1, t3=0, i;
	for(i = 0; i < valor; i++){
		t1 = t2;
		t2 = t3;
		t3 = t1 + t2;
		printf("%i > ",t3);
	}
	printf("Fim");
	return 0;
}
