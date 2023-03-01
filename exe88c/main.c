#include <stdio.h>
#include <stdlib.h>

/*88) Crie um programa que melhore o procedimento Gerador() da questão anterior
para que mostre uma mensagem vário
Ex: Ao chamar Gerador("Aprendendo Portugol", 4) aparece:
+-------=======------+
Aprendendo Portugol
Aprendendo Portugol
Aprendendo Portugol
Aprendendo Portugol
+-------=======------+*/

int main() {
	Gerador("Aprendendo Linguagem C ",4);
	return 0;
}

void Gerador(char mensagem[], int rep){
	int i;
	printf("+-------=======------+\n");
	for(i = 0; i < rep; i++)
	{
		printf("%s \n",mensagem);	
	}
	printf("+-------=======------+\n");
	
	
}
