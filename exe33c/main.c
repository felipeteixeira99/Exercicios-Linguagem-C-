#include <stdio.h>
#include <stdlib.h>

/* 33) Escreva um programa para aprovar ou não o empréstimo bancário para a compra
de uma casa. O programa vai perguntar o valor da casa, o salário do comprador e
em quantos anos ele vai pagar. Calcule o valor da prestação mensal, sabendo que
ela não pode exceder 30% do salário ou então o empréstimo será negado. */

void main(){
	float casa, salario, parcela, maxComp;
	int anos, quantidade;
	
	printf("Valor do imovel: R$ ");
	scanf("%f",&casa);
	printf("Salario: R$ ");
	scanf("%f",&salario);
	printf("Anos para pagar: ");
	scanf("%i",&anos);
	
	system("cls");
	
	quantidade = anos * 12;
	parcela = casa / quantidade;
	maxComp = (salario * 30) / 100;
	
	printf("Valor da parcela: R$ %.2f \n",parcela);
	printf("Valor que pode ser comprometido: R$ %.2f \n",maxComp);
	
	
	if(parcela <= maxComp){
		printf("Emprestimo aprovado");
	}
	else{
		printf("Emprestimo Negado");
	}
	system("pause");
}
