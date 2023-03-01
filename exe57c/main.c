#include <stdio.h>
#include <stdlib.h>

/* 57) Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários.
No final, mostre o total de salários pagos aos homens e o total pago às
mulheres. O programa vai perguntar ao usuário se ele quer continuar ou não
sempre que ler os dados de um funcionário. */

void main(){
	int i = 1;
	float salario, salarioH = 0, salarioM = 0;
	char sexo[1];
	char resp[] = "S";
	
	
	while(strcmp(resp, "s") == 0 || strcmp(resp, "S") == 0){
		printf("Digite o salario da %i pessoa: ",i);
		scanf("%f",&salario);
		printf("Digite o sexo da %i pessoa [M/F]: ",i);
		scanf("%s",sexo);
		
		if(strcmp(sexo, "M") == 0 || strcmp(sexo, "m") == 0){
			salarioH = salarioH + salario;
		}
		else if(strcmp(sexo,"f") == 0 || strcmp(sexo, "F") == 0){
			salarioM = salarioM + salario;
		}
		else{
			printf("Sexo Invalido...Tente novamente! \n");
		}
		
		printf("Deseja lancar mais pessoas? [S/N]: ");
		scanf("%s",resp);
		system("cls");
		i++;
	}
	printf("\n");
	printf("Total salarios pagos para Homens: R$ %.2f \n",salarioH);
	printf("Total salarios pagos para Mulheres: R$ %.2f \n",salarioM);
	
}
