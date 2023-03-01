#include <stdio.h>
#include <stdlib.h>

/*41) Desenvolva um programa que mostre na tela a seguinte contagem:
100 95 90 85 80 ... 0 Acabou! */

void main(){
	int i = 100;
	while(i >= 0){
		printf(" %i",i);
		i-=10;	
	}
	printf("...Acabou!");
}
