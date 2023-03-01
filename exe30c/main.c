#include <stdio.h>
#include <stdlib.h>

/*30) [DESAFIO] Refaça o algoritmo 25, acrescentando o recurso de mostrar que tipo
de triângulo será formado:
- EQUILÁTERO: todos os lados iguais
- ISÓSCELES: dois lados iguais
- ESCALENO: todos os lados diferentes */

//A < B + C
//B < A + C
//C < A + B

//TRIANGULO ESCALENO: LADOS DIFERENTES
//ANGULOS N?O CONGRUENTES

//TRIANGULO ISOSCELES: DOIS LADOS IGUAIS
//POSSUI ANGULOS CONGRUENTES
// AB CONGRUENTE COM AC

//TRIANGULO EQUILATERO: TODOS OS TRES LADOS IGUAIS
//CADA ANGULO MEDE 60? TOTALIZANDO OS 180?
//OS TRES LADOS S?O CONGRUENTES

void main(){
	int a,b,c;
	printf("Valor de A: ");
	scanf("%i",&a);
	printf("Valor de B: ");
	scanf("%i",&b);
	printf("Valor de C: ");
	scanf("%i",&c);
	
	if (a < b + c && b < a + c && c < a + b){
		printf("Esses valores formam um Triangulo \n");
		if((a != b) && (b != c) && (a != c)){
			printf("Triangulo Escaleno \n");
		}
		else{
			if((a == b) && (b == c)){
			printf("Triangulo Equilatero \n");	
			}
			else{
				printf("Triangulo Isosceles");
			}
		}
	}
	else{
		printf("Nao forma Triangulo \n");
	}	
	system("pause");
}

