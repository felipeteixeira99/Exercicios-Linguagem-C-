#include <stdio.h>
#include <stdlib.h>

/* 5) Fa�a um programa que leia as duas notas de um aluno em uma mat�ria e mostre
na tela a sua m�dia na disciplina.
Ex:
Nota 1: 4.5
Nota 2: 8.5
A m�dia entre 4.5 e 8.5 � igual a 6.5 */


/*float calcularMedia(float n1,float n2){
	float resultado;
	resultado = (n1+n2)/2;
	return resultado;
}*/

void main() {
	float media,nota1,nota2;
	printf("Digite a primeira nota: ");	
	scanf("%f",&nota1);
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	media = (nota1 + nota2) / 2;
	printf("A media e igual a %.1f\n",media);
	system("pause");	
}

