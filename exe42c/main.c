#include <stdio.h>
#include <stdlib.h>

/*42) Fa�a um algoritmo que pergunte ao usu�rio um n�mero inteiro e positivo
qualquer e mostre uma contagem at� esse valor:
Ex: Digite um valor: 35
Contagem: 1 2 3 4 5 6 7 ... 33 34 35 Acabou! */

void main(){
	int num,i=1;
	printf("Digite um numero: ");
	scanf("%i",&num);
	while(i <= num){
		printf(" %i",i);
		i++;
	}
	printf("...Acabou !");
}
