#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um algoritmo que leia o n�mero de vezes que se deseja imprimir na tela a
frase EU VOU APRENDER ESTRUTRUA DE REPETI��O. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
		int x;
		
			printf("Digite o n�mero de vezes que se deseja imprimir:");
				scanf("%d", &x);
	
		while(x >= 0){
			
				printf("\nEU VOU APRENDER ESTRUTRUA DE REPETI��O.");
				
				x--;
			}
	
	return 0;
}

