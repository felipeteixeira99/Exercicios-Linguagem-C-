#include <stdio.h>
#include <stdlib.h>

int main() {
	system("color 0a"); //0 <- fundo a <- fonte  //primeiro parametro = fundo segundo = fonte
	int idade = 0; // declarar variaveis 
	//printf("Hello World !\n\n\n"); //escrever
	
	//printf("existe o valor %i dentro da variavel idade\n",idade);
	
	//printf("Escreva um novo valor para a variavel idade\n");
	//scanf("%i",&idade); //ler valores 
	//printf("O novo valor digitado para a variavel idade foi: %i \n",idade); //escreva
	
	
	//char nome[20]; //vetor de caracteres tipo nome[tamanho];
	//printf("Digite um nome: ");
	//scanf("%s",nome);
	//printf("O nome digitado foi: %s \n",nome);
	
//	int numero;
//	printf("Digite um numero: ");
//	scanf("%i",&numero);
//	
//	if(numero >= 5){  //se
//		printf("O numero e maior ou igual a 5 \n");
//	}
//	else{ //entao
//		printf("O numero e menor que 5 \n");
//	}

	//Comparadores 
	//igualdade ==
	//diferença !=
	// maior > 
	// menor <
	//maior igual >=
	//menor igual <= 
	
	//Operadores Logicos
	// and &&
	// or ||
	// not ! !=
	
//	int contador = 0;
//	
//	while(contador < 10){    //enquanto 
//		printf("%i \n",contador);
//		//contador+=2; //incremento contador-=2
//		//contador++;
//		//contador = contador + 1;
//	}  
//	
//	

//	int contador = 0;
//	
//	//repita ate
//	do{
//		printf("%i \n",contador);
//		contador++;
//	}
//	while(contador <= 10);

//Para
//i <- variavel para loop 
//j <- variavel para loop 
	
//	int contador;
//	for(contador=0; contador < 100; contador++){
//		if (contador%2==0){
//			continue; //reinicia o loop -> proxima iteração 
//		}
//		if(contador == 49){
//			break; //parar loop
//		}
//		printf("%i\n",contador);
//	} 
//
//	printf("Digite o primeiro numero: ");
//	int v1;
//	scanf("%i",&v1);
//	printf("Digite o segundo numero: ");
//	int v2;
//	scanf("%i",&v2);
//	
//	int resultado;
//	resultado = somar(v1,v2);
//	printf("A soma do numero %i com o numero %i e %i \n",v1,v2,resultado);

//int matriz[5][5];
//	matriz[0][0] = 10;
//	scanf("%i",&matriz[0][0]);
//

	int i = 10;
	int valor;
	if(i == 5) valor = 1; //caso tenha só uma linha
	else valor = 0; //caso tenha só uma linha
	
	
	//Operador Ternário serve em java 
	//valor = (i==5) ? 1 : 0;
	

	system("pause");
	return 0;	
}

//Declarar funçoes 

//int somar(int valor1,int valor2){
//	int resultado;
//	resultado = valor1 + valor2;
//	return resultado;
//}

//int somar(int valor1,int valor2){
//	int resultado = valor1 + valor2;
//	return resultado;
//}

int somar(int valor1,int valor2){
	return valor1 + valor2;
}








