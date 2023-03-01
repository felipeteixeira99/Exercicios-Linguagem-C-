#include <stdio.h>
#include <stdlib.h>

/* 87) Crie um programa que melhore o procedimento Gerador() da questão anterior
para que mostre uma mensagem personalizada, passada como parâmetro.
Ex: Ao chamar Gerador("Aprendendo Portugol") aparece:
+-------=======------+
Aprendendo Portugol
+-------=======------+ */

int main(){
	Gerador("Aprendendo C");
	return 0;
}

void Gerador(char mensagem[]){
	printf("+-----=====-----+ \n");
	printf("%s\n",mensagem);
	printf("+-----=====-----+ \n");
}
