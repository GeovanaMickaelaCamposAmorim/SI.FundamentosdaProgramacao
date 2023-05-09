#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um algoritmo para ler 10 números e a lado de cada número imprimir a metade
e o quadrado do número. Ex: Número: 2 – Metade: 1 / Quadrado 4 */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int x =1;
	float a;
	
	while (x <= 10)	{
		
		printf("Digite um numero: ");
			scanf("%f", &a);
			
		printf("Número: %f – Metade: %f / Quadrado %f \n\n", a, a/2, a*a);
	
	x++;
	
	}
	
	return 0;
}
