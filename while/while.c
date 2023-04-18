#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 1;
	int soma = 0;
	
	while (contador<=100) {
		
		soma = soma+contador;
		
		contador++;
	}
		printf("%d ", soma);
		
	return 0;
}
