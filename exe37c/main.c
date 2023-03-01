#include <stdio.h>
#include <stdlib.h>

/* 37) Uma empresa precisa reajustar o sal�rio dos seus funcion�rios, dando um
aumento de acordo com alguns fatores. Fa�a um programa que leia o sal�rio atual,
o g�nero do funcion�rio e h� quantos anos esse funcion�rio trabalha na empresa.
No final, mostre o seu novo sal�rio, baseado na tabela a seguir:
- Mulheres
- menos de 15 anos de empresa: +5%
- de 15 at� 20 anos de empresa: +12%
- mais de 20 anos de empresa: +23%
- Homens
- menos de 20 anos de empresa: +3%
- de 20 at� 30 anos de empresa: +13%
- mais de 30 anos de empresa: +25% */

void main(){
	float salarioAtual, salarioNovo;
	char sexo[1];
	int anos;
	
	printf("Digite o sexo [M/F]: ");
	scanf("%s",sexo);
	printf("Salario Atual: R$");
	scanf("%f",&salarioAtual);
	printf("Anos de empresa: ");
	scanf("%i",&anos);
	
	if(sexo[0] == 'f' || sexo[0] == 'F'){
		if(anos < 15){
		salarioNovo = salarioAtual + (salarioAtual * 0.05);
		}
		else if(anos >= 15 && anos <= 20){
		salarioNovo = salarioAtual + (salarioAtual * 0.12);	
		}
		else{
			salarioNovo = salarioAtual + (salarioAtual * 0.23);
		}
	}
	else if (sexo[0] == 'm' || sexo == 'M'){
		if(anos < 20){
			salarioNovo = salarioAtual + (salarioAtual * 0.03);
		}
		else if(anos >= 20 && anos <= 30){
			salarioNovo = salarioAtual + (salarioAtual * 0.13);
		}
		else{
			salarioNovo = salarioAtual + (salarioAtual * 0.25);
		}
	}
	else{
		printf("Genero Invalido...tente novamente \n !");
	}
	
	printf("O seu novo salario e: R$ %.2f \n",salarioNovo);
}
