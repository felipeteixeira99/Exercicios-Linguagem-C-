#include <stdio.h>
#include <stdlib.h>

/* 86) Crie um programa que tenha um procedimento Gerador() que, quando chamado,
mostre a mensagem "Olá, Mundo!" com algum componente visual (linhas)
Ex: Ao chamar Gerador() aparece:
+-------=======------+
Olá, Mundo!
+-------=======------+ */

int main(){
	Gerador();
	return 0;
}

void Gerador(){
	printf("+-----=====-----+ \n");
	printf("Ola Mundo! \n");
	printf("+-----=====-----+ \n");
}
