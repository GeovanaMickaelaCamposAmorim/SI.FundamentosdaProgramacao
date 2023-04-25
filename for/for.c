#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void) {
	
	int x, numero, inicial;
	
		printf("Digite um numero inicial: ");
	scanf("%d", &inicial);
	
	printf("Digite um numero fim: ");
	scanf("%d", &numero);
	
	for(x = inicial; x <= numero; x++){
		
		printf("%d,", x);
	}
	
	return 0;
}
