#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um algoritmo que leia o número de vezes que se deseja imprimir na tela a
frase EU VOU APRENDER ESTRUTRUA DE REPETIÇÃO. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
		int x;
		
			printf("Digite o número de vezes que se deseja imprimir:");
				scanf("%d", &x);
	
		while(x >= 0){
			
				printf("\nEU VOU APRENDER ESTRUTRUA DE REPETIÇÃO.");
				
				x--;
			}
	
	return 0;
}

