#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void) {
	int x, numero;
	
	printf("Digite um numero fim: ");
	scanf("%d", &numero);
	
	for(x = 1; x <= numero; x++){
		
		printf("%d", x);
	}
	
	return 0;
}
