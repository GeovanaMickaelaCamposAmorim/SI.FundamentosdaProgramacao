#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void) {
	
		setlocale(LC_ALL, "Portuguese");
		
		int num, cont = 1;
		float media;
		
		do{
				printf("Digite um numero: ");
				scanf("%d", &num);
				media = media + num; 
				cont++;
			
			} while (cont <= 5);
			
		printf("Média: %f ", media/5);
		
		return 0; 
	}
