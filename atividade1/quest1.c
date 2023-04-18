#include<stdio.h>
#include<stdlib.h>

/* Faça um algoritmo que receba do usuário uma quantidade de metros 	
e em seguida faça a conversão para centímetros, exibindo o resultado. */

int main () {
	float metro;

	
	printf("Digite o valor em metros: ");
	scanf("%f", &metro);
	

	printf("\nMetros convertidos para centimetros: %f cm", (metro * 100));
}

