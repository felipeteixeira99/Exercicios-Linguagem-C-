#include <stdio.h>
#include <stdlib.h>

/*  */

void main(){
	int a = 5;
	int b = 10;
	
	
	int c = a;
	a = b;
	b = c;
	

	printf("Valor de A: %i \n",a);
	printf("Valor de B: %i \n",b);

	system("pause");
}
