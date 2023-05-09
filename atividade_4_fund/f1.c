#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Implemente um algoritmo para ler 15 números e imprimir a quantidade de números
maiores que 30 foram digitados.*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int a, b = 0, x;
	
	for(x = 1; x<=15; x++){
		
			printf("\nDigite um numero: ");
				scanf("%d", &a);
			
			if(a>30){
				b++;
			}
	}
	
	printf("Quantidade de números maiores que 30: %d", b);
	
	return 0;
}
