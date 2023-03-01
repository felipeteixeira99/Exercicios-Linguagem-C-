#include <stdio.h>
#include <stdlib.h>

/* 89) Crie um programa que melhore o procedimento Gerador() da questão anterior
para que o programador possa escolher uma entre três bordas:
+-------=======------+ Borda 1
~~~~~~~~:::::::~~~~~~~ Borda 2
<<<<<<<<------->>>>>>> Borda 3
Ex: Uma chamada válida seria Gerador("Portugol Studio", 3, 2)
~~~~~~~~:::::::~~~~~~~
Portugol Studio
Portugol Studio
Portugol Studio
~~~~~~~~:::::::~~~~~~~ */

int main() {
	Gerador("Aprendendo Linguagem C ",4,3);
	return 0;
}



void Gerador(char mensagem[], int rep, int borda){
	int i;
		
	if(borda == 1){
		printf("+-------=======------+\n");
		for(i = 0; i < rep; i++){
		printf("%s \n",mensagem);	
	}
	printf("+-------=======------+\n");	
	}
	else if(borda == 2){
		printf("~~~~~~~~:::::::~~~~~~~ \n");
		for(i = 0; i < rep; i++){
		printf("%s \n",mensagem);	
	}
	printf("~~~~~~~~:::::::~~~~~~~ \n");	
}
	else if(borda == 3){
		printf("<<<<<<<<------->>>>>>> \n");
		for(i = 0; i < rep; i++){
		printf("%s \n",mensagem);	
	}
	printf("<<<<<<<<------->>>>>>> \n");
}
}
