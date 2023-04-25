#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void) {
	int x, numero, result;
	
		printf("Digite um numero: ");
		scanf("%d", &numero);
	
	printf("Tabuada de %d: \n \n", numero);
	
	for(x = 1; x <= 10; x++){
		
	printf("%d X %d = %d \n", numero, x, (numero*x));
	}
	
	return 0;
}
