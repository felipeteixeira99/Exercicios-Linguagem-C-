#include <stdio.h>
#include <stdlib.h>

/* 8) Desenvolva um programa que leia uma distância em metros e mostre os valores
relativos em outras medidas.
Ex:
Digite uma distância em metros: 185.72
A distância de 85.7m corresponde a:
0.18572Km
1.8572Hm
18.572Dam
1857.2dm
18572.0cm
185720.0mm

km <- metros / 1000 quilometros
hm <- metros / 100 //hectometro
dam <- metros / 10 //decametro
dm <- metros * 10 //decimetro
cm <- metros * 100 //centimetro
mm <- metros * 1000 //milimetro
*/
 
void main(){
	float km, metros,hectometro,decametro,decimetro,centimetro,milimetro;
	printf("Digite uma distancia em metros: ");
	scanf("%f",&metros);
	km = metros / 1000;
	hectometro = metros / 100;
	decametro = metros / 10;
	decimetro = metros * 10;
	centimetro = metros * 100;
	milimetro = metros * 1000;
	printf("A distancia de %0.2f corresponde a: \n",metros);
	printf("%0.5fKm \n",km);
	printf("%0.4fHm \n",hectometro);
	printf("%0.3fDam \n",decametro);
	printf("%0.1fdm \n",decimetro);
	printf("%0.1fcm \n",centimetro);
	printf("%0.1fmm \n",milimetro);
	system("pause");
}
