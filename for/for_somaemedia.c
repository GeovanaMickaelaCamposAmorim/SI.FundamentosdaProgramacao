#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void) {
	int x;
	float numero, soma = 0;
	
	for(x = 1; x <= 5; x++){
		
		printf("Digite um numero: ");
		scanf("%f", &numero);
		
	soma = soma + numero;
	
	}
		printf("A media e: %f \n", (soma/5));
		printf("A soma e: %f ", soma);
	
	return 0;
}
