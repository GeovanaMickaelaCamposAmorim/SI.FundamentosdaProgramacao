#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void) {
	
		setlocale(LC_ALL, "Portuguese");
		
		int num, fat = 1, cont = 1;
	
			printf("Digite um numero: ");
				scanf("%d", &num);
		
		do{
				fat = fat * cont; 
				cont++;
			
			} while (cont <= num);
			
		printf("Fatorial de %d: %d ", num, fat);
		
		return 0; 
	}
