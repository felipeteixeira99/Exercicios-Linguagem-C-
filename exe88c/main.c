#include <stdio.h>
#include <stdlib.h>

/*88) Crie um programa que melhore o procedimento Gerador() da quest�o anterior
para que mostre uma mensagem v�rio
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
