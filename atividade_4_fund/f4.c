#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Faça um algoritmo que permita o usuário escolher qual a tabuada de multiplicar que se
deseja imprimir */

int main () {
	setlocale(LC_ALL, "Portuguese");
	int a, x;
	
	printf("\nDigite qual a tabuada de multiplicar que se deseja imprimir: ");
				scanf("%d", &a);
	
		printf("\n TABUADA DO %d \n", a);
		
		for (x=1; x<=10; x++){
			
			printf("\n %d X %d = %d", a, x, (a*x));
			
		}
		
		return 0;
}
