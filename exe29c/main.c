#include <stdio.h>
#include <stdlib.h>

/*29) Desenvolva um programa que leia o nome de um funcionário, seu salário,
quantos anos ele trabalha na empresa e mostre seu novo salário, reajustado de
acordo com a tabela a seguir:
- Até 3 anos de empresa: aumento de 3%
- entre 3 e 10 anos: aumento de 12.5%
- 10 anos ou mais: aumento de 20% */

void main(){
	char nome[20];
	float salario, aumento, salarioNovo;
	int anos;
	
	printf("Nome: ");
	scanf("%s",nome);
	printf("Salario: R$");
	scanf("%f",&salario);
	printf("Anos de empresa: ");
	scanf("%i",&anos);
	
	if ((anos >= 0) && (anos <= 3)){
	aumento = (salario * 3) / 100;
	salarioNovo = salario + aumento;}
	
	else{
		if((anos > 3) && (anos <= 10)){
		aumento = (salario * 12.5) / 100;
		salarioNovo = salario + aumento;}
		
		else{
			if(anos > 10){
			aumento = (salario * 20) / 100;
			salarioNovo = salario + aumento;}	
		}	
	}

	system("cls");
	
	printf("Resultado \n");
	printf("%s \n",nome);
	printf("%.2f \n",salarioNovo);
	system("pause");
}
