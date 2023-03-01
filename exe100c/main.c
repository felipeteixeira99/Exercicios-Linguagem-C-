#include <stdio.h>
#include <stdlib.h>

/* 100) Melhore o exercício 96, criando além da função Media() uma outra função
chamada Situacao(), que vai retornar para o programa principal se o aluno está
APROVADO, em RECUPERAÇÃO ou REPROVADO. Essa nova função, vai receber como
parâmetro o resultado retornado pela função Media(). */


float media(float a, float b);
char* Situacao(float num);
int main(){
	float n1, n2, notas;
	char* status;
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	notas = media(n1,n2);
	status = Situacao(notas);
	printf("Media: %.2f \n",notas);
	printf("Situacao do Aluno: %s ",status);
	
	return 0;
}

float media(float a, float b){
	float soma = (a + b) / 2;
	return soma;
}

char* Situacao(float num){
	if(num >= 6){
		//return 'A';
		return "Aprovado";
	}
	else if(num >= 3 && num < 6){
		//return 'R';
		return "Recuperacao";
	}
	else if(num < 3){
		//return 'N';
		return "Reprovado";
	}
}

