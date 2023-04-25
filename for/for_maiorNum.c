#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void) {
	int x;
	float numero, maior;
	
	for(x = 1; x <= 10; x++){
		
		printf("Digite um numero: ");
		scanf("%f", &numero);
		
		
	if(x == 1){
		maior = numero;
	}	
	
	if(numero>maior){
		maior= numero;
	}
	
	}
		printf("O maior numero e: %f \n", maior);
		
	
	return 0;
}
