#include<stdio.h>
#include<stdlib.h>

/* Fa�a um algoritmo que receba do usu�rio uma quantidade de metros 	
e em seguida fa�a a convers�o para cent�metros, exibindo o resultado. */

int main () {
	float metro;

	
	printf("Digite o valor em metros: ");
	scanf("%f", &metro);
	

	printf("\nMetros convertidos para centimetros: %f cm", (metro * 100));
}

