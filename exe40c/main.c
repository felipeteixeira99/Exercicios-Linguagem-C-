#include <stdio.h>
#include <stdlib.h>

/*40) Crie um aplicativo que mostre na tela a seguinte contagem:
0 3 6 9 12 15 18 Acabou! */

void main(){
	
	int i;
	while(i <= 18){
		printf(" %i ",i);
		i+=3;
	}
	printf("Acabou !");
	
}
