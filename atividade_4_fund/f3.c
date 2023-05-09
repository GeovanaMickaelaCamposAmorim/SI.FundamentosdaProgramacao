#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um algoritmo que imprima uma tabela de conversão de polegadas para
centímetros. Deseja-se que a tabela conste valores de 1 polegada até 20 polegadas inteiras. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float x;
	
		printf(" TABELA POL --> CM \n ");
	
	for (x=1; x<= 20; x++){
		
	 printf("\n %.0f pol = %.2f cm ", x , (x*2.54));
	 
	}
	return 0;
}
