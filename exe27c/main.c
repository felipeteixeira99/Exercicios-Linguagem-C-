#include <stdio.h>
#include <stdlib.h>

/* 27) Crie um programa que leia duas notas de um aluno e calcule a sua m�dia,
mostrando uma mensagem no final, de acordo com a m�dia atingida:
- M�dia at� 4.9: REPROVADO
- M�dia entre 5.0 e 6.9: RECUPERA��O
- M�dia 7.0 ou superior: APROVADO */

void main(){
	float n1,n2,media;
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	media = (n1 + n2) / 2;
	printf("A media foi: %.2f \n",media);
	
	if ((media >= 0) && (media < 5)){
		printf("Aluno Reprovado \n");
	}
	
	else{
		if((media >= 5) && (media < 7)){
		printf("Aluno em Recuperacao \n");
	}
		else{
			if( media >= 7){
				printf("Aluno Aprovado \n");
			}	
		}
	}
	system("pause");	
	}

