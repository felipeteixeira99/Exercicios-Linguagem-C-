#include <stdio.h>
#include <stdlib.h>

/* 100) Melhore o exerc�cio 96, criando al�m da fun��o Media() uma outra fun��o
chamada Situacao(), que vai retornar para o programa principal se o aluno est�
APROVADO, em RECUPERA��O ou REPROVADO. Essa nova fun��o, vai receber como
par�metro o resultado retornado pela fun��o Media(). */


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

